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
vector < pair < int , int > > vpi;

void prime_factorization (sll n) {
	if (n % 2 == 0) {
		sll cnt = 0;
		while (n % 2 == 0) {
			cnt++;
			n /= 2;
		}
		vpi.push_back(make_pair (2 , cnt));
	}
	for (sll i = 3; i <= sqrt (n); i += 2) {
		sll cntt = 0;
		while (n % i == 0) {
			cntt++;
			n /= i;
		}
		if (cntt > 0)
		vpi.push_back(make_pair (i , cntt));
	}
	if (n != 1) {
		//if (vpi[vpi.size() - 1].first == n) 
		  //  vpi[vpi.size() - 1].second++;
		//else 
		vpi.push_back(make_pair (n , 1));
	}
}

int main () {
	int T; sf(T);
	while (T--) {
		vpi.clear();
		sll n; sfl(n);
		prime_factorization (n);
		sll sz = vpi.size();
		if (sz == 1) 
			printf ("%lld = %lld\n" , n , n);
		else {
			printf ("%lld = " , n);
			for (sll ii = 0; ii < sz - 1; ii++) {
				if (vpi[ii].second == 1) 
					printf ("%lld * " , vpi[ii].first);
				else 
				    printf ("%lld^%lld * " , vpi[ii].first , vpi[ii].second);
			}
			if (vpi[sz - 1].second == 1) 
				printf ("%lld\n" , vpi[sz - 1].first);
			else printf ("%lld^%lld\n" , vpi[sz - 1].first , vpi[sz - 1].second);
		}
	} 
}
