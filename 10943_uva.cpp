/****ALLAH IS ALMIGHTY****/

/**
   uva online judge 
   problem name :: how do you add?
   problem id   :: 10943;
   catagory     :: dynamic_programming;
   my solution ................
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

const int N = 104;
const int M = 1000000;
int dp[N][N];

int calculate (int i , int j) {
    if (i == 0) return 1;
    if (j == 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    dp[i][j] = ((calculate (i - 1 , j) % M) + (calculate (i , j - 1) % M)) % M;
    return dp[i][j];
}

int main () {
    int n , m;
    while (scanf ("%d%d" , &n , &m) == 2) {
        if (!n && !m) break;
        memset (dp , -1 , sizeof (dp));
        pf(calculate (n , m));
    }
}

