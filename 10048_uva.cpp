/****ALLAH IS ALMIGHTY****/

/**
	uva online judge;
	problem name :: Audiophobia;
	problem id   :: 10048;
	catagory     :: Mst , floyd_warshall;
	               be carefull about output pattern;
	               this problem is similar to 1002 light oj problem;
	my_solution..............
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

struct edge {
    int u , v , w;
    edge () {}
    edge (int uu , int vv , int ww) {
        u = uu;
        v = vv;
        w = ww;
    }
    bool operator < (const edge &pp) const {
        return w < pp.w;
    }
};

const int N = 123;
const int inf = (1<<28);
int dp[N][N];
int ff[N];
vector < edge > vp;
int n , m , q;

int find__ (int u) {
    if (u != ff[u])
        ff[u] = find__ (ff[u]);
    return ff[u];
}

void mstree () {
    for (int i = 0; i <= n; i++)
        ff[i] = i;
    sort (vp.begin() , vp.end());
    int cnt = 0;
    for (int i = 0; i < vp.size(); i++) {
        int x = find__ (vp[i].u);
        int y = find__ (vp[i].v);
        if (x != y) {
            ff[x] = y;
            dp[vp[i].u][vp[i].v] = vp[i].w;
            dp[vp[i].v][vp[i].u] = vp[i].w;
            cnt++;
            if (cnt == n - 1) break;
        }
    }
}


void apsp () {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                dp[i][j] = min (dp[i][j] ,
                max (dp[i][k] , dp[k][j]));
            }
        }
    }
}

int main () {
    int tt = 0;
    while (scanf ("%d%d%d" , &n , &m , &q) == 3) {
        if (!n && !m && !q) break;
        vp.clear();
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (i == j) dp[i][j] = 0;
                else dp[i][j] = inf;
            }
        }
        for (int i = 0; i < m; i++) {
            int a , b , c;
            sf(a); sf(b); sf(c);
            vp.push_back(edge (a , b , c));
        }
        mstree ();
        apsp ();
        if (tt) puts("");
        printf ("Case #%d\n" , ++tt);
        for (int i = 0; i < q; i++) {
            int s , d;
            sf(s); sf(d);
            if (dp[s][d] != inf)
            pf(dp[s][d]);
            else puts("no path");
        }
    }
}

