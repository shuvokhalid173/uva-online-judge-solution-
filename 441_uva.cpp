/****ALLAH IS ALMIGHTY****/

/**
	uva online judge 
	problem name :: lotto;
	problem id   :: 441;
	problem catagory :: backtrack_permutation_genarate;
	                    be careful about output pattern;
	mysolution .......................
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

int arr[22];
int store[22];
vector < int > vv[22];

void gooo (int ind , int pos , int n) {
	if (pos == 6) {
		for (int i = 0; i < 5; i++) 
			printf ("%d " , store[i]);
			pf(store[5]);
	}
	else {
		for (int i = ind; i <= n - 6 + pos; i++) {
			store[pos] = arr[i];
			gooo (i + 1 , pos + 1 , n);
		}
	}
}


int main () {
	int cnt = 0 , x;
	while (sf(x) == 1 && x) {
		for (int i = 0; i < x; i++) {
			int y; sf(y);
			vv[cnt].push_back (y);
		}
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		int sz = vv[i].size();
		for (int j = 0; j < sz; j++) 
			arr[j] = vv[i][j];
		sort (arr , arr + sz);
		gooo (0 , 0 , sz);
		if (i < cnt - 1) puts("");
	}
}
