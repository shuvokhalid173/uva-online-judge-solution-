/// uva online judge
/// problem name :: Let Me Count The Ways;;
/// problem id :: 357;
/// time limit 3s
/// algorithm used ::: coin change "dynamic programming "
/// note :: ei problem tate  appropiate array size nite hobe
/// tasara memset korte somoy lagbe
/// sekhetre TLE show korte pare
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <cmath>
#include <cstdlib>
typedef long long sll;
typedef long sl;
typedef int si;
typedef double sd;
typedef long double sld;
typedef float sf;
typedef unsigned long long int sulli;
typedef char sc;
#define loop(i,a,b) for(i=a;i<=b;i++)
#define rloop(i,a,b) for(i=b;i>=a;i--)
#define sset(x , a) memset(x , a , sizeof (x))
#define pf printf
#define sf scanf
#define limit 30010
using namespace std;
long long dp[limit];
long long coin[10] = {1 , 5 , 10 , 25 , 50};
long long coin_change (long long n)
{
	sset (dp , 0);
	dp[0] = 1;
	if (dp[n]!=0)
    return dp[n];
	long long i , j , x;
	for (i = 0; i < 5; i ++)
    {
        x = coin[i];
        for (j = coin[i]; j <= n; j++)
        {

            dp[j] = dp[j] + dp[j - x];

        }

    }

	return dp[n];
}
int main (){
	long long n;
	while (sf ("%lld" , &n) == 1){
		if (coin_change (n) > 1){
			pf ("There are %lld ways to produce %lld cents change.\n" , coin_change (n) , n);
		}
		else{
			pf ("There is only %lld way to produce %lld cents change.\n" , coin_change (n) , n);
		}
	}
	return 0;
}

