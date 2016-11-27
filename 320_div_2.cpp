/****ALLAH IS ALMIGHTY****/

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

const int N = 123;
const int NN = 23000;
int dp[NN];
int pp[N];
const int inf = (1<<28);

int main () {
    int T; sf(T);
    while (T--) {
        memset (dp , -1 , sizeof (dp));
        int n; sf(n); dp[0] = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sf(pp[i]);
            sum += pp[i];
        }
        int diff = inf;
        int one = 0;
        for (int i = 0; i < n; i++) {
            for (int j = NN - 1; j >= 0; j--) {
                int v = j - pp[i];
                if (dp[v] != -1 && v >= 0) {
                    dp[j] = max (dp[j] , dp[v] + 1);
                    ///dp[j] = dp[v] + 1;
                    int vv = sum - j;
                    if (dp[vv] != -1 && dp[j] + dp[vv] == n && j + vv == sum && abs (dp[j] - dp[vv]) <= 1) {
                        if (abs (j - vv) < diff) {
                            diff = j - vv;
                            one = j;
                        }
                    }
                }
            }
        }
        cout << one << " " << sum - one << endl;
    }
}
