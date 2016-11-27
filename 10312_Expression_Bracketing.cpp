/**
   *********************************************************************
   problem description
   uva online judge 
   problem name :: expression_bracketing
   problem id :: 10312
   algorithm used :: catalan and super catalan number;
   output = super_catalan (n) - catalan (n - 1);
   super_catalan (n) = (3 * ((2 * n) - 3) * super_catalan (n - 1) - (n - 3) * super_catalan (n - 2)) / n;
   base_case :: super_catalan (1) = super_catalan (2) = 1;
   http://mathworld.wolfram.com/SuperCatalanNumber.html
   catalan (n) = ans;
   ans += catalan (i) * catalan (n - 1 - i);
   i = (0 to n - 1)
   base_case = catalan (0) = catalan (1) = 1;
   
   ********************************************************************
   my solution
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
long long dp[30];
long long dp2[30];
long long res[30];

long long super_catalan (long long n){
	if (n == 1 || n == 2)
	return 1;
	if (dp[n]!=-1)
	return dp[n];
	else{
		dp[n] = (3 * ((2 * n) - 3) * super_catalan (n - 1) - (n - 3) * super_catalan (n - 2)) / n;
	}
	return dp[n];
}

long long catalan (long long n){
	if (n <= 1)
	return 1;
	if (dp2[n]!=-1)
	return dp2[n];
	else{
		long long sum = 0;
		for (int i = 0; i < n; i++){
			sum += catalan (i) * catalan (n - 1 - i);
		}
		dp2[n] = sum;
	}
	return dp2[n];
}

void call (){
	memset (dp , -1 , sizeof (dp));
	memset (dp2 , -1 , sizeof (dp2));
	res[0] = 1;
	for (int i = 1; i <= 27; i++)
	res[i] = super_catalan (i) - catalan (i - 1);
}
int main (){
	call ();
	long long n;
	while (sdi (n)!=EOF){
		printf ("%lld\n" , res[n]);
	}
}
