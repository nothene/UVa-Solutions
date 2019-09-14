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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		if(N == 0) break;
		if(N == 1){
			cout << "Printing order for 1 pages:\nSheet 1, front: Blank, 1\n";
			continue;
		}
		int sheet = ceil(N / 4.0);
		cout << "Printing order for " << N << " pages:\n";
		int num = 1, row; bool left = false;
		int book[100][2] = {0};
		for(int i = 1; num <= sheet*2; i++){
			if(left){
				book[num][0] = num;
				left = false;
			} else{
				book[num][1] = num;
				left = true;
			}
			num++;
		}
		row = 2*sheet; left = false;
		for(int i = 1; num <= N; i++){
			if(left){
				book[row][0] = num;
				left = false;
			} else{
				book[row][1] = num;
				left = true;
			}
			num++; row--;
		}
		num = 1;	
		for(int i = 1; i <= sheet; i++){
			cout << "Sheet " << i << ", front: "; if(book[(i*2)-1][0] == 0) cout << "Blank"; else cout << book[(i*2)-1][0];
			cout << ", "; if(book[(i*2)-1][1] == 0) cout << "Blank"; else cout << book[(i*2)-1][1]; cout << endl;
			if(1){
				cout << "Sheet " << i << ", back : "; if(book[(i*2)][0] == 0) cout << "Blank"; else cout << book[(i*2)][0];
				cout << ", "; if(book[(i*2)][1] == 0) cout << "Blank"; else cout << book[(i*2)][1];	cout << endl;	
			}
		}
	}
    return 0;
}
