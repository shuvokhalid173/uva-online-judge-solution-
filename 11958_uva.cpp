/******* header files *******/
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
/****** customize data type *********/
typedef long long sll;
typedef long int sli;
typedef unsigned int sui;
/******* customization of loop *********/
#define loop(i,n) for(i=1;i<=n;i++)
#define rloop(i,n) for(i=n;i>=1;i--)
#define aloop(i,n) for(i=0;i<n;i++)
#define arloop(i,n) for(i=n-1;i>=0;i--)
/****** constant variable ************/
#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
#define eps 1e-9
/****** customization of operation *********/
#define p_b(x) push_back(x)
#define pp_b pop_back
#define whole(x) (x.begin(),x.end())
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n,x);
/****** some useful function *************/
int gcd (int a , int b){if (b == 0) return a;return gcd (b , a % b);}
int smax (int a , int b){if (a > b) return a;else return b;}
int smin (int a , int b){if (a < b) return a;else return b;}
int odd (int n){if (n&2) return 1;else return 0;}
int even (int n){if (n&2) return 0;else return 1;}
/************************************************************************************/
using namespace std;

int time_calc (int h , int m , int h1 , int m1){
	///sf(h); sf(m); sf(h1); sf(m1);
	int mnt , hour;
	if (m1 < m){
		mnt = m1 + 60 - m;
		h++;
	}
	else{
		mnt = m1 - m;
	}
	if (h > h1)
	h1 = h1 + 24;
	int ans = (h1 - h) * 60 + mnt;
	//cout << "diff = " << ans << endl;
	return ans;
}
/**int main (){
	int a , b , c , d;
	cin >> a >> b >> c >> d;
	cout << time_calc (a,b,c,d) << endl;
	main ();
}**/

int main ()
{
	int test;
	sf(test);
	int i;
	loop(i,test){
		int bus;
		int cth , ctm;
		char ctt[10];
		sf(bus);
		scanf ("%s" , &ctt);
		cth = (ctt[0] - '0') * 10 + (ctt[1] - '0');
		ctm = (ctt[3] - '0') * 10 + (ctt[4] - '0');
		//cout << "cth = " << cth << " ctm " << ctm << endl;
		int j;
		char att[10];
		int ath , atm , ttm;
		int tmin = INF;
		int tneed;
		loop(j,bus){
			scanf ("%s%d" , &att , &ttm);
			ath = (att[0] - '0') * 10 + (att[1] - '0');
			atm = (att[3] - '0') * 10 + (att[4] - '0');
			tneed = time_calc (cth , ctm , ath , atm) + ttm;
			if (tmin > tneed){
				tmin = tneed;
			}
		}
		printf ("Case %d: %d\n" , i , tmin);
	}
}
