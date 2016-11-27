/****ALLAH IS ALMIGHTY****/

/**
	uva online judge;
	problem name :: closest sum;
	problem id   :: 10487;
	catagory     :: ad_hoc;
	my_solution ...................
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

int num[1004];
const int inf = (1<<28);

int main () {
	int n; int ind = 0;
	while (sf(n) == 1 && n) {
		for (int i = 0; i < n; i++) sf(num[i]);
		int q; sf(q);
		printf ("Case %d:\n" , ++ind);
		for (int i = 0; i < q; i++) {
			int qq; sf(qq);
			int diff = inf; int csum = qq;
			for (int ii = 0; ii < n; ii++) {
				for (int jj = ii + 1; jj < n; jj++) {
					int sum = num[ii] + num[jj];
					if (abs (qq - sum) < diff) {
						diff = abs (qq - sum);
						csum = sum;
					}
				}
			}
			printf ("Closest sum to %d is %d.\n" , qq , csum);
		}
	}
}

