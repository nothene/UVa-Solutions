#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<string, string> ss;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

int N, T;

bool comp(ss a, ss b){
	if(a.first == b.first){
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<ss> books; map<string, int> key;
    string s;
	while(getline(cin, s)){
		if(s == "END") break;
		string title = "\"", author = "";
		int index = 1;
		for(int i = 1; ; i++){
			if(s[i] == '"') break;
			title += s[i]; index++;
		} index += 5; title += "\"";
		for(int j = index; j < s.size(); j++){
			author += s[j];
		}
		books.pb({author, title});
	}
	
	sort(books.begin(), books.end(), comp);
	
	for(int i = 0; i < books.size(); i++){
		key[books[i].second] = i;
	}
	
	vector<bool> borrowed(books.size(), false);
	vector<bool> returned(books.size(), false);
	
	while(getline(cin, s)){
		if(s == "END") break;
		string command = "", title = "\"";
		for(int i = 0; i < 6; i++){
			command += s[i];
		}
		for(int j = 8; ; j++){
			if(s[j] == '"') break;
			title += s[j];
		} title += "\"";
		if(command == "BORROW"){
			borrowed[key[title]] = true;
			returned[key[title]] = false;
		} else if(command == "RETURN"){
			returned[key[title]] = true;
		} else if(command == "SHELVE"){
			int prev = -1;
			forn(i, books.size()){
				if(!borrowed[i]) prev = i;
				else if(returned[i]){
					if(prev == -1) cout << "Put " << books[i].second << " first\n";
					else cout << "Put " << books[i].second << " after " << books[prev].second << endl;
					returned[i] = false;
					borrowed[i] = false;
					prev = i;
				}
			}
			cout << "END\n";
		}
	}
    return 0;
}
