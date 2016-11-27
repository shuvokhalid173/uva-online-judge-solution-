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
#define spdi(x) printf("%d\n",x)
#define sdii(x,y) scanf("%d%d",&x,&y)
#define SDs(x) scanf("%s",x)
#define uu first
#define vv second

using namespace std;

int main (){
	int t;
	scanf ("%d" , &t);
	int i;
	for (i = 1; i <= t; i++){
		double d , v , u;
		double mtime , m_d_time , ans;
		scanf ("%lf%lf%lf" , &d , &v , &u);
		if (u <= v){
			printf ("Case %d: can't determine\n" , i);
		}
		else{
			mtime = d / u;
			m_d_time = d / sqrt (u * u - v * v);
			ans = abs (m_d_time - mtime);
			if (ans == 0){
				printf ("Case %d: can't determine\n" , i);
			}
			else{
				printf ("Case %d: %.3lf\n" , i , ans);
			} 
		}
	}
}
