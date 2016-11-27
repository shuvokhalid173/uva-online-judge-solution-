/**
   uva online judge 
   problem name :: bars
   problem id :: 12455
   time limit :: 1s
   algorithm used :: dynamic programming , coin_change || 0-1 knapsack
   
   in coin_change algorithm we use a coin in many times we need , 
   but in this problem we have to use one value
   only one time  so we call i + 1 instead of i;  
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

#define MAX 1005
int dp[MAX][MAX];
int n , p;
int value[MAX];

int myfunction (int index , int amount)
{
	if (index >= p){
		if (amount == n){
			return 1;
		}
		else{
			return 0;
		}
	}
	if (dp[index][amount]!=-1)
	return dp[index][amount];
	int process1 = 0;
	int process2 = 0;
	if (value[index] + amount <= n){
		process1 = myfunction (index + 1 , value[index] + amount);
	}
	else{
		process1 = 0;
	}
	process2 = myfunction (index + 1 , amount);
	int res = process1 | process2;
	dp[index][amount] = res;
	return dp[index][amount];
}

int main ()
{
	int case_;
	scanf ("%d" , &case_);
	int t;
	for (t = 1; t <= case_; t++){
		memset (dp , -1 , sizeof (dp));
		scanf ("%d" , &n);
		scanf ("%d" , &p);
		int u;
		for (u = 0; u < p; u++){
			scanf ("%d" , &value[u]);
		}
		int ans;
		ans = myfunction (0 , 0);
		if (!ans){
			printf ("NO\n");
		}
		else{
			printf ("YES\n");
		}
	}
	
}
