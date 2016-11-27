/******* header file ******/
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

int price[10004];
vector < int > store;

int main (){
	int n;
	while (sf(n)!=EOF){
		store.clear();
		int i;
		for (i = 0; i < n; i++){
			sf(price[i]);
			store.push_back(price[i]);
		}
		int taka;
		sf(taka);
		sort (store.begin() , store.end());
		int j , k;
		for (j = 0; j < store.size(); j++){
			if (store[j] == taka / 2){
				k = j;
				break;
			}
			else if (store[j] > taka / 2){
				k = j - 1;
				break;
			}
		}
		int m , x;
		for (m = k; m >= 0; m--){
			x = taka - store[m];
			if (binary_search (store.begin() , store.end() , x)){
				break;
			}
		}
		printf ("Peter should buy books whose prices are %d and %d.\n" , taka - x , x);
		puts("");
	}
}

