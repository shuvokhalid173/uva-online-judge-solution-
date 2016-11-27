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

int arr[25];

int main () {
    int T; sf(T);
    while (T--) {
        int n; sf(n);
        for (int i = 0; i < n; i++)
            sf(arr[i]);
        sort (arr , arr + n);
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
            sum += abs (arr[i] - arr[i + 1]);
        pf(sum * 2);
    }
}

