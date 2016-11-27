/****ALLAH IS ALMIGHTY****/

/**
   uva online judge
   problem name :: dollars;
   problem id   :: 147;
   catagory     :: dynamic_programming , coin_change;
                   use long long instead of int;
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

#define N 30004
sll dp[N];
sll cn[20] = {50 , 20 , 10 , 5 , 100 , 200 ,
            500 , 1000 , 2000 , 5000 , 10000};
char tk[10];

sll ff (char *ff) {
    sll len = strlen (ff);
    sll ss = 0 , i;
    for (i = 0; i < len; i++) {
        if (ff[i] != '.')
            ss = ((ss * 10) + (ff[i] - '0'));
        else break;
    }
    ss *= 100;
    sll pp = 0;
    for (sll j = i + 1; j < len; j++)
        pp = ((pp * 10) + ff[j] - '0');
    ss += pp;
    return ss;

}

int main () {
    while (scanf ("%s" , &tk)) {
        if (strcmp (tk , "0.00") == 0) break;
        sll n = ff (tk);
        memset (dp , 0 , sizeof (dp));
        dp[0] = 1;
        for (sll i = 0; i < 11; i++) {
            if (cn[i] <= n)
            for (sll j = cn[i]; j <= n; j++) {
                dp[j] = dp[j] + dp[j - cn[i]];
            }
        }
        printf ("%6s%17lld\n" , tk , dp[n]);
    }
}

