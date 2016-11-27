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

char str[24];
vector < string > ss;
vector < int > v;
vector < int > x;
int low , high;
int call (int n);

int main ()
{
	int test;
	sf(test);
	while (test--){
        ss.clear ();
        v.clear ();
        x.clear ();
		int ds; // data base size;
		sf(ds);
		while (ds--){
			scanf ("%s" , &str);
			ss.push_back(str);
			sf(low);
			v.push_back(low);
			sf(high);
			x.push_back(high);
		}
		/// data base collected;
		int q;
		sf(q);
		while (q--){
			int p;
			sf(p);
			int index;
			index = call (p);
			///cout << index << endl;
			///printf ("%d\n" , index);
			if (index)
			cout << ss[index] << endl;
			else
			cout << "UNDETERMINED" << endl;
		}
		if (test) cout << endl;
	}
}

int call (int n){
	int i;
	bool flag = false;
	int counter = 0;
	int sz = v.size ();
	for (i = 0; i < sz; i++){
		if (n >= v[i] && n <= x[i]){
			flag = true;
			break;
		}
	}
	int j;
        for (j = i + 1; j < sz; j++){
            if (n >= v[j] && n <= x[j]){
                flag = false;
                break;
            }
        }

	if (flag)
	return i;
	else
	return 0;
}
