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

int is_leap(int year){
    if(year % 4 == 0){
        if(year % 100 == 0)
        {
            if (year % 400 == 0) return 29;
            else return 28;
        }
        else return 29;
    }
    else return 28;
}

int days(int month, int year){
	if(month == 4 || month == 6 || month == 9 || month == 11) return 30;
	if(month == 2) return is_leap(year);
	return 31;
}

int main(){
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
	scanf("%d", &N);
	for1(i, N){
		int month, day, year;
		scanf("%2d%2d%4d", &month, &day, &year);
		
		forn(j, 40){
			int day_in_month = days(month, year);
			day = (day + 6) % day_in_month + 1;
			if(day < 8){
				month = (month % 12) + 1;
				if(month == 1) year++;
			}
		}
		
		printf("%d %02d/%02d/%d ", i, month, day, year);
		
		if(month == 1 && day >= 21 || month == 2 && day <= 19) printf("aquarius\n");
		if(month == 2 && day >= 20 || month == 3 && day <= 20) printf("pisces\n");
		if(month == 3 && day >= 21 || month == 4 && day <= 20) printf("aries\n");
		if(month == 4 && day >= 21 || month == 5 && day <= 21) printf("taurus\n");
		if(month == 5 && day >= 22 || month == 6 && day <= 21) printf("gemini\n");
		if(month == 6 && day >= 22 || month == 7 && day <= 22) printf("cancer\n");
		if(month == 7 && day >= 23 || month == 8 && day <= 21) printf("leo\n");
		if(month == 8 && day >= 22 || month == 9 && day <= 23) printf("virgo\n");
		if(month == 9 && day >= 24 || month == 10 && day <= 23) printf("libra\n");
		if(month == 10 && day >= 24 || month == 11 && day <= 22) printf("scorpio\n");
		if(month == 11 && day >= 23 || month == 12 && day <= 22) printf("sagittarius\n");
		if(month == 12 && day >= 23 || month == 1 && day <= 20) printf("capricorn\n");
	}
    return 0;
}
