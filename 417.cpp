#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

int N, T, M, K;

bool comp(string a, string b){
	if(a.size() != b.size()) return a.size() < b.size();
	return a < b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<string> word;
	for(char i = 'a'; i <= 'z'; i++){
		string s = ""; s += i;
		//pq.push(s);
		word.pb(s);
		for(char j = i+1; j <= 'z'; j++){
			string t = s+j;
			//pq.push(t);
			word.pb(t);
			for(char k = j+1; k <= 'z'; k++){
				string u = t+k;
				//pq.push(u);
				word.pb(u);
				for(char l = k+1; l <= 'z'; l++){
					string v = u+l;
					//pq.push(v);
					word.pb(v);
					for(char m = l+1; m <= 'z'; m++){
						string w = v+m;
						//pq.push(w);
						word.pb(w);	
					}					
				}
			}
		}
	}
	sort(word.begin(), word.end(), comp);
	string s;
	while(cin >> s){
		int cnt = 1; bool ok = true;
		forn(i, s.size()-1){
			if(s[i] >= s[i+1]){
				cout << 0 << endl; ok = false;
			}
		}
		if(ok){
			for(int i = 0; i < word.size(); i++){
				if(word[i] == s){
					cout << cnt << endl; break;
				} else cnt++;
			}	
		}
	}
    return 0;
}
