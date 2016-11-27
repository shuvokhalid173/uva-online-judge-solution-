/****ALLAH IS ALMIGHTY****/

/**
   uva online judge
   problem name :: open credit system;
   problem id   :: 11078;
   catagory     :: ad_hoc , optimization;
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

const int N = 100000 + 4;
int arr[N];
const int inf = (1<<28);
int main () {
    int T; sf(T);
    while (T--) {
        int n; sf(n);
        for (int i = 0; i < n; i++)
            sf(arr[i]);
            int mx = -inf;
            int diff = -inf;
        for (int i = 0; i < n - 1; i++) {
             if (arr[i] > mx) {
                mx = arr[i];
                int dif = arr[i] - arr[i + 1];
                diff = max (diff , dif);
             }
             else diff = max (diff , mx - arr[i + 1]);
        }
        pf(diff);
    }
}

