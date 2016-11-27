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
char str[20];
int main ()
{
	int i = 1; 
	while (cin >> str){
		if (strlen (str) == 1 && str[0] == '#'){
			break;
		}
		if (strcmp (str , "HELLO") == 0)
		printf ("Case %d: ENGLISH\n" , i++);
		else if (strcmp (str , "HOLA") == 0)
		printf ("Case %d: SPANISH\n" , i++);
		else if (strcmp (str , "HALLO") == 0)
		printf ("Case %d: GERMAN\n" , i++);
		else if (strcmp (str , "BONJOUR") == 0)
		printf ("Case %d: FRENCH\n" , i++);
		else if (strcmp (str , "CIAO") == 0)
		printf ("Case %d: ITALIAN\n" , i++);
		else if (strcmp (str , "ZDRAVSTVUJTE") == 0)
		printf ("Case %d: RUSSIAN\n" , i++);
		else
		printf ("Case %d: UNKNOWN\n" , i++);
	
	}
}
