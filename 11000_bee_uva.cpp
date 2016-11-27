/// uva online judge 
/// problem name :: Bee;
/// problem id :: 11000
/// time limit 3s;
/// algorithm used ::: fibonacci series and dynamic programming ;;;;
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
using namespace std;
#define limit 4294967298
long long int dp[limit];
long long int bee (long long int  n){
	if (n == 0)
	return 1;
	if (n == 1)
	return 2;
	if (dp[n]!=-1)
	return dp[n];
	else{
		dp[n] = bee (n - 1) + bee (n - 2) + 1;
	}
	return dp[n];
}
 main (){
	sset (dp , -1);
	long long int  n;
	while (sf ("%lld" , &n) && n!=-1){
		pf ("%lld %lld\n" , bee (n - 1) , bee (n));
	}
	return 0;
}
