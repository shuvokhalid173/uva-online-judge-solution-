/****ALLAH IS ALMIGHTY****/

/**
   uva online judge
   problem name :: marks distribution;
   problem id   :: 10910;
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

const int N = 74;
int dp[N][N];

int calculate (int i , int j) {
    if (i == 0) return 1;
    if (j == 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    dp[i][j] = (calculate (i - 1 , j) + calculate (i , j - 1));
    return dp[i][j];
}

int main () {
    int T; sf(T);
    while (T--) {
        memset (dp , -1 , sizeof (dp));
        int N , T , P;
        sf(N); sf(T); sf(P);
        pf(calculate (T - (N * P) , N));
    }
}
