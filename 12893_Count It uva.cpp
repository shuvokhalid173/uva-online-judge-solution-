#include <bits/stdc++.h>
using namespace std;
#define limit 100000000000
unsigned long long dp[limit];
unsigned long long f (unsigned long long n){
	if (n == 0)
	return 0;
	if (n == 1)
	return 1;
	if (n == 2)
	return 1;
	if (dp[n]!=-1)
	return dp[n];
	else{
		dp[n] = f (n / 2) + n % 2;
	}
	return dp[n];
}
int main()
{
	memset (dp , -1 , sizeof (dp));
    unsigned long long n;
    while (scanf ("%llu" , &n)){
    	printf ("%llu\n" , f (n));
    }
}
