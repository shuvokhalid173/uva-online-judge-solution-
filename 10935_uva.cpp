/**  uva online judge
     problem name :: Throwing cards away I;
	 problem id :: 10935;
	 catagory :: adhoc , pure simulation , for efficient solution used queue;
	 note :: careful about n = 1; if (n = 1) then no card will be discarded ;
	 my solution..........
**/
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
int main ()
{
	queue < int > Q;
	vector < int > V;
	
	int n;
	while (cin >> n && n){
	    V.clear();
		if (n == 1){
			cout << "Discarded cards:" << endl;
			cout << "Remaining card: 1" << endl;
		}
		
		else{
			int i;
			for (i = 1; i <= n; i++)
			Q.push (i);
	
			while (!Q.empty ()){
				int u = Q.front();
				V.push_back(u);
				Q.pop();
				Q.push(Q.front());
				Q.pop();
			}
			int size = V.size();
			cout << "Discarded cards: ";
			for (int i = 0; i < size - 2; i++) 
			cout << V[i] << ", ";
			cout << V[size - 2] << endl;
			cout << "Remaining card: " << V[size - 1] << endl;
		}
	}
}
