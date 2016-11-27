/****ALLAH IS ALMIGHTY****/

/**
	uva online judge;
	problem name :: Fractions Again?!
	problem id   :: 10976;
	catagory     :: ad_hoc , math , optimization;
	                in this problem y lies bet'n k + 1 to 2 * k;
	                second task is to find out x;
	                
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

template < typename T > T gcd (T a , T b){if (b == 0) return a;return gcd (b , a % b);}
template < typename T > T lcm (T a , T b) {return (a * b) / gcd (a , b);}
vector < pair < int , int > > vp;

int main () {
	sll k; 
	while (sfl(k) == 1) {
		vp.clear();
		sll cnt = 0;
		for (sll i = k + 1; i <= 2 * k; i++) {
			sll rem = (k * i) % (i - k);
			sll x = (k * i) / (i - k);
			if (rem == 0) {
				vp.push_back(make_pair (x , i));
				cnt++;	
			} 
		}
		pf(cnt);
		for (sll i = 0; i < vp.size(); i++) 
		    printf ("1/%lld = 1/%lld + 1/%lld\n" , k , vp[i].first , vp[i].second);
	}
}
