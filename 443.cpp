#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 2100000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back

int N, T;

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<unsigned long long> V;
    priority_queue<unsigned long long> pq;
	for(int i = 0; i < 25; i++){
		for(int j = 0; j < 25; j++){
			for(int k = 0; k < 25; k++){
				for(int l = 0; l < 32; l++){
					unsigned long long n = pow(2, l) * pow(3, k) * pow(5, j) * pow(7, i);
					if((n) < INF){
						pq.push(-n);
					} 
				}
			}
		}
	}
	
	for(int i = 0; i < 5842; i++){
		if(pq.top() != 0) V.pb(-pq.top()); pq.pop();
	}
	
	while(cin >> N){
		if(N == 0) break;
		if(N % 100 == 11 || N % 100 == 12 || N % 100 == 13){
			cout << "The " << N << "th humble number is " << V[N-1] << ".\n";
		} else if(N % 10 == 1){
			cout << "The " << N << "st humble number is " << V[N-1] << ".\n";
		} else if(N % 10 == 2){
			cout << "The " << N << "nd humble number is " << V[N-1] << ".\n";
		} else if(N % 10 == 3){
			cout << "The " << N << "rd humble number is " << V[N-1] << ".\n";
		} else{
			cout << "The " << N << "th humble number is " << V[N-1] << ".\n";
		}
	}
    return 0;
}
