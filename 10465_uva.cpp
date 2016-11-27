/****ALLAH IS ALMIGHTY****/

/**
   uva online judge
   problem name :: Homer Simpson
   problem id   :: 10465;
   catagory     :: dynamic_programming;
                   I use the idea of coin change;
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

const int N = 10000 + 4;
int dp[N];
const int inf = (1<<28);

int main () {
    int t1 , t2 , T;
    while (scanf ("%d%d%d" , &t1 , &t2 , &T) != EOF) {
        memset (dp , -1 , sizeof (dp));
        dp[0] = 0;
        for (int i = t1; i <= T; i++) {
            int x = i - t1;
            if (dp[x] != -1 && x >= 0) {
                dp[i] = max (dp[i] , dp[x] + 1);
            }
        }
        for (int i = t2; i <= T; i++) {
            int x = i - t2;
            if (dp[x] != -1) {
                dp[i] = max (dp[i] , dp[x] + 1);
            }
        }
        bool ok = false;
        if (dp[T] != -1) pf(dp[T]);
        else {
            for (int i = T - 1; i >= min (t1 , t2); i--) {
                if (dp[i] != -1) {
                    printf ("%d %d\n" , dp[i] , T - i);
                    ok = true;
                    break;
                }
            }
            if (!ok) printf ("0 %d\n" , T);
        }
    }
}

