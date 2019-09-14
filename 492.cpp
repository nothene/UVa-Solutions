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

int N, T;

int isvowel(char ch) {
  char vowel[6] = "aeiou";
  for (int j = 0; vowel[j]; j++)
    if (vowel[j] == ch)
      return 1;
  return 0;
}

int isconsonant(char ch) {
  char cons[23] = "bcdfghjklmnpqrstvwxyz";
  for (int j = 0; cons[j]; j++)
    if (cons[j] == ch)
      return 1;
  return 0;
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    char c, store, prev = " ";
	while(c = getchar() != EOF){
		if()
		store = getchar();
			while(c = getchar() && 	 || isconsonant(tolower(c)))){
				printf("%c", c);
			}
		}
	}
    return 0;
}
