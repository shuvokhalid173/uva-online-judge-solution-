/****ALLAH IS ALMIGHTY****/

/**
	uva online judge 
	problem name :: longest path;
	problem id   :: 10000;
	catagory     :: dynamic_programming (floyd_warshal)
	                in this problem i use floyd warshal algorithm 
	                but it can also be solved by using (lis) or other technique;
	my_solution................................
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

const int N = 123;
const int inf = 12345;
int matrix[N][N];

int main () {
	int n; int tst = 0;
	while (sf(n) && n) {
		int stp; sf(stp);
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				if (i == j) matrix[i][j] = 0;
				else matrix[i][j] = -inf;
			}
		}
		while (1) {
			int x , y;
			sf(x); sf(y);
			if (!x && !y) break;
			matrix[x][y] = 1;
		}
		for (int ii = 0; ii <= n; ii++) {
			for (int i = 0; i <= n; i++) {
				for (int j = 0; j <= n; j++) {
					matrix[i][j] = max (matrix[i][j] , matrix[i][ii] + matrix[ii][j]);
				}
			}
		}
		int mx = -inf , ind = 0;
		for (int i = 0; i <= n; i++) {
			if (mx < matrix[stp][i]) {
				mx = matrix[stp][i];
				ind = i;
			}
		}
		printf ("Case %d: The longest path from %d has length %d, finishing at %d.\n\n" , ++tst , stp , matrix[stp][ind] , ind);
	}
}
