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
int store[3670];
int main (){
	int test;
	sf(test);
	while (test--){
		memset (store , 0 , sizeof (store));
		for (int i = 6; i <= 3670; i += 7){
			store[i] = 1;/// friday's hartal will not be countable;
			store[i + 1] = 1;/// saturday's hartal will not be countable;
		}
		int N , PN;
		sf(N);
		sf(PN);
		int HD = 0;
		int THD = 0;
		while (PN--){
			int H;
			sf(H);
			int i;
			HD = 0;
			int temp;
			temp = H;
			//int cnt = H;
			for (i = H; i <= N; i += H){
				///if (cnt!=6 && cnt!=7){
					if (!store[i]){
						store[i]++;
						HD += store[i];
					}
				//}
			}
			THD += HD;
		}
		pf(THD);
	}
}
