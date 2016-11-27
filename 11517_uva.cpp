/****ALLAH IS ALMIGHTY****/

/**
	uva online judge 
	problem name :: exact change ;
	problem id   :: 11517;
	catagory     :: dynamic_programming , coin_change;
	                each coin will be used only one time;
	my solution .......................
**/

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

using namespace std;

#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d\n",x)
typedef long long sll;
#define sfl(x) scanf ("%lld",&x)
#define pfl(x) printf("%lld\n",x)

const int inf = (1<<28);
const int N = 30000 + 2;
int dp[N]; 
int bills[N];
int n; 

void construct () {
	for (int i = 0; i < n; i++) {
		for (int ii = N; ii >= 0; ii--) {
			int x = ii - bills[i];
			if (dp[x] < inf && x >= 0) {
				dp[ii] = min (dp[ii] , dp[x] + 1);
			}
		}
	}
}

int main () {
	int T; sf(T);
	while (T--) {
		for (int i = 0; i < N; i++) dp[i] = inf;
		dp[0] = 0; int amo;
		sf(amo); sf(n);
		for (int i = 0; i < n; i++) sf(bills[i]);
		construct ();
		for (int i = amo; i < N; i++) {
			if (dp[i] != inf) {
				printf ("%d %d\n" , i , dp[i]);
				break;
			}
		}
	} 
}
