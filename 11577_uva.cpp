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

char line[205];
int arr[550];
vector < int > store;

int main ()
{
	int test;
	scanf ("%d\n" , &test);
	for (int x = 1; x <= test; x++){
		mem(arr , 0);
		cin >> line;
		int len;
		len = strlen (line);
		int i;
		for (i = 0; i < len; i++){
			if ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')){
				arr[line[i] - 'A']++;
			}
		}
		int j;
		int MAX = 0;
		int MAXi = 0;int index = 0;
		while (MAXi!=MAX){
			
			for (j = 0; j <= 52; j++){
				if (MAX <= arr[j]){
					//pos = arr[j]
					index = j;
				}
			}
			cout << line[index];
			MAX = arr[index];
			MAXi = MAX;	
		}
		puts("");
		
	}
}
