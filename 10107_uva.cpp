#include <iostream>
#include <iomanip>
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
 
#define stream istringstream
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repv(i,n) for(int i=n-1; i>=0; i--)
#define repl(i,n) for(int i=1; i<=(int)n; i++)
#define replv(i,n) for(int i=n; i>=1; i--)
 
 
#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
#define pb(x) push_back(x)
#define ppb pop_back
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define pii pair<int,int>
#define pmp make_pair
 
 
#define sdi(x) scanf("%d",&x)
#define sdii(x,y) scanf("%d%d",&x,&y)
#define SDs(x) scanf("%s",x)
#define uu first
#define vv second
using namespace std;
typedef long long sll;
vector < sll > v;
int main (){
	sll val;
	while (scanf ("%lld" , &val) == 1){
		v.push_back(val);
		sort (v.begin() , v.end());
		sll size = v.size();
		sll pos;
		if (size == 1)
		printf ("%lld\n" , v[0]);
		else if (size == 2)
		printf ("%lld\n" , (v[0] + v[1]) / 2);
		else{
			if (size % 2 == 1){
				///size++;
				pos = size / 2;
				///pos--;
				printf ("%lld\n" , v[pos]);
			}
			else{
				pos = size / 2;
				printf ("%lld\n" , (v[pos] + v[pos - 1]) / 2);
			}
		}
	}
}
