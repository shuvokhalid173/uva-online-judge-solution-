/****ALLAH IS ALMIGHTY****/

/**
	uva online judge 
	problem name :: cd;
	problem id   :: 11849;
	catagory     :: ad_hoc , optimization;
	                use map to avoid TLE;
	my solution ...........................
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

int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}

sll arr[1000005];
sll brr[1000005];
map < sll , bool > mp;
set < sll > st;
set < sll > :: iterator it;

int main () {
	sll n , m; 
	while (scanf ("%lld%lld" , &n , &m) == 2) {
		mp.clear(); st.clear();
		if (!n && !m) break;
		sll cnt = 0;
		for (sll i = 0; i < n; i++) {
			sfl(arr[i]); 
			st.insert(arr[i]);
		}
		for (it = st.begin(); it != st.end(); it++) 
			mp[*it] = 1;
		for (sll i = 0; i < m; i++) {
			sfl(brr[i]); 
			if (mp[brr[i]]) cnt++;
		}
		pfl(cnt);
	}
}
