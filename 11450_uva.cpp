/****ALLAH IS ALMIGHTY****/

/**
    uva online judge;
    problem name :: wedding shopping;
    problem id   :: 11450;
    catagory     :: dynamic_programming;
                    this is a non classic dp problem;
                    I use the idea of 0_1 knapsack in this problem;
    my_solution ........................
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

int dp[23][4500];
int garments[23][23];
int avamo , C , rr = 0;
const int inf = (1<<28);

int shopping (int i , int amo) {
    if (i == C) return 0;
    if (dp[i][amo] != -1)
        return dp[i][amo];
    int ret = -inf;
    for (int j = 1; j <= garments[i][0]; j++) {
        if (garments[i][j] + amo <= avamo) {
            ret = max (ret , garments[i][j] + shopping (i + 1 , garments[i][j] + amo));
        }
    }
    return dp[i][amo] = ret;
}

int main () {
    int T; sf(T);
    while (T--) {
        memset (dp , -1 , sizeof (dp));
        sf(avamo); sf(C);
        for (int i = 0; i < C; i++) {
            sf(garments[i][0]);
            for (int j = 1; j <= garments[i][0]; j++) {
                sf(garments[i][j]);
            }
        }
        int ans = shopping(0 , 0);
        if (ans < 0) puts("no solution");
        else pf(ans);
    }
}
