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
typedef long double sld;
/******* customization of loop *********/
#define loop(i,n) for(i=1;i<=n;i++)
#define rloop(i,n) for(i=n;i>=1;i--)
#define aloop(i,n) for(i=0;i<n;i++)
#define arloop(i,n) for(i=n-1;i>=0;i--)
/****** constant variable ************/
#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
#define RAD 0.01745329251994329576923690768489
#define eps 1e-9
#define H 6440.0
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
int main ()
{
	char str[25];
	int flag[25];
	while (scanf ("%s" , &str) == 1){
		///memset (flag , 0 , sizeof (flag));
		int len;
		len = (strlen (str));
		int i;
		for (i = 0; i < len; i++){
			int c = 0;
			if (str[i] == 'B' || str[i] == 'F' || str[i] == 'P' || str[i] == 'V'){
				c = 1;
			}
			else if (str[i] == 'C' || str[i] == 'G' || str[i] == 'J' || str[i] == 'K' || str[i] == 'Q' || str[i] == 'S' || str[i] == 'X' || str[i] == 'Z'){
				c = 2;
			}
			else if (str[i] == 'D' || str[i] == 'T'){
				c = 3;
			}
			else if (str[i] == 'L'){
				c = 4;
			}
			else if (str[i] == 'M' || str[i] == 'N'){
				c = 5;
			}
			else if (str[i] == 'R'){
				c = 6;
			}
			else{
				c = 0;
			}
			flag[i] = c;
		}
		int j;
		int x = 0;
		for (j = 0; j < len; j++){
			if (flag[j]!=x){
				if (flag[j])
				cout << flag[j];
				x = flag[j];
			}
		}
		cout << endl;
	}
}
