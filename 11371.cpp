#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define pb push_back
#define ff first
#define ss second

ll N, T, M, K;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
	while(cin >> N){
		vi freq(10, 0), freq2(10, 0);
		ll last = 100, cnt = 0;
		while(N){
			freq[N%10]++; cnt++;
			if(N%10 != 0) last = min(N%10, last);
			N /= 10;
		}
		freq2 = freq;
		ll hi = 0, lo = 0, t_hi, mult = 1;
		for(int i = 9; i >= 1; i--){
			if(i == last){
				while(freq[i] > 1){
					hi += i * mult;
					mult *= 10;
					freq[i]--;
				}
				t_hi = last * pow(10, cnt-1);
				hi += t_hi;
				break;
			}
			while(freq[i]){
				hi += i * mult;
				mult *= 10;
				freq[i]--;
			}
		}
		mult = 1;
		for(int i = 1; i <= 9; i++){
			while(freq2[i]){
				lo += i * mult;
				mult *= 10;
				freq2[i]--;
			}
		}
		while(freq2[0]){
			lo *= 10;
			freq2[0]--;
		}
		cout << lo << " - " << hi << " = " << lo-hi << " = 9 * " << (lo-hi)/9 << endl;
	}
    return 0;
}
