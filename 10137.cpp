#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define INF 1000000000
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define for1(i, n) for(int (i) = 1; (i) <= (n); (i)++)
#define BUG(x) cout<<x<<endl;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second

int N, T, M, K;

/*int main(){
  while(scanf("%d", &N)){
    if(N == 0) break;
	vector<double> V(N); double sum = 0, hi = 0, lo = 0;
    forn(i, N) scanf("%lf", &V[i]), sum += V[i];
    sum /= N;
    forn(i, N){
    	double diff = (double)(long)(((V[i]-sum) * 100.0) / 100.0);
    	if(diff > 0) hi += diff;
    	else lo += -diff;
	}
    printf("$%.2lf\n", min(lo, hi));
  }

 return 0;  
}*/


int main(){
  int n;
  double amount;
  while(scanf("%d",&n) && n!=0){
    vector<double> money;
    double amount,total=0,respPos=0,respNeg=0;
    for (int i = 0; i < n; ++i)
    {
      scanf("%lf",&amount);
      total += amount;
      money.push_back(amount);
    }
    total /= n;
    for (int i = 0; i < n; ++i)
    {
      double dif =(double) (long) ((money[i]-total) * 100.0) / 100.0;
      if(dif>0)
        respPos+=dif;
      else
        respNeg+=dif;
    }
    double resp = (-respNeg > respPos) ? -respNeg : respPos;
    resp = (resp<0)?-resp:resp;
    printf("$%.2lf\n",resp);
  }

 return 0;  
}
