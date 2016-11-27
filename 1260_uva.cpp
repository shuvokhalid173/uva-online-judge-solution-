/****ALLAH IS ALMIGHTY****/

/**
	uva online judge 
	problem name :: sales;
	problem id   :: 1260;
	catagory     :: ad_hoc , complete search;
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

const int inf = (1<<28);
int arr[1004];

int main () {
    int T; sf(T);
    while (T--) {
        int n; sf(n);
        for (int i = 0; i < n; i++) sf(arr[i]);
        int sum = 0;
        for (int i = 1; i < n; i++) {
                int cnt = 0;
            for (int ii = 0; ii < i; ii++) {
                if (arr[ii] <= arr[i])
                    cnt++;
            }
            sum += cnt;
        }
        pf(sum);
    }
}

