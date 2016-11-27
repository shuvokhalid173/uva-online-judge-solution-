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

#define N 30004
int  dp[N];

int main () {
    int n , a , b;
    cin >> n >> a >> b;
    memset (dp , 0 , sizeof (dp)); dp[0] = 1;
    for (int i = a; i <= b; i++) {
        for (int j = i; j <= n; j++) {
            dp[j] = dp[j] + dp[j - i];
        }
    }
    cout << dp[n] << endl;main ();
}
