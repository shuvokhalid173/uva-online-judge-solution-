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

char str[25];
char strc[25];
vector < char > vr;
vector < char > vrc;

bool vowel (char ch){
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	else return false;
}

int main (){
	int T;
	sf(T);
	while (T--){
		vr.clear();
		vrc.clear();
		scanf ("%s%s" , &str , &strc);
		int len , lenc;
		len = strlen (str);
		lenc = strlen (strc);
		if (len == lenc){
			if (strcmp (str , strc) == 0)
			printf ("Yes\n");
			else{
				int i;
				for (i = 0; i < len; i++){
					if (!vowel(str[i])){
						vr.push_back(str[i]);
					}
					if (!vowel (strc[i])){
						vrc.push_back(strc[i]);
					}
				}
				int sz , szc;
				sz = vr.size();
				szc = vrc.size();
				if (sz == szc){
					int j;
					bool ok = true;
					for (j = 0; j < sz; j++){
						if (vr[j]!=vrc[j]){
							ok = false;
							break;
						}
					}
					if (ok) 
					printf ("Yes\n");
					else
					printf ("No\n");
				}
				else
				printf ("No\n");
			}
		}
		else
		printf ("No\n");
	}
}
