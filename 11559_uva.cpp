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

#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
#define eps 1e-9

#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d\n",x)
#define sff(x,y) scanf("%d%d",&x,&y)
#define pff(x,y) printf("%d %d\n",x,y)

using namespace std;

const int inf = (1<<28);

int main () {
    int N , P , H , W;
    while (scanf ("%d%d%d%d" , &N , &P , &H , &W) == 4) {
        int mincost = inf;
        while (H--) {
            int p; sf(p);
            for (int i = 0; i < W; i++) {
                int a; sf(a);
                if (a >= N)
                    mincost = min (mincost , a * p);
            }
            ///cout << mincost << endl;
        }
        if (mincost <= P) pf(mincost);
        else puts("stay home");
    }
}
