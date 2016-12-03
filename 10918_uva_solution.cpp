/****ALLAH IS ALMIGHTY****/

#include <bits/stdc++.h>

using namespace std ;


int main () {
	long long  dp[123]; 
	dp[1] = 1; 
	dp[2]= 2; 
	for (long long i = 3; i < 30; i++) 
		dp[i] = dp[i - 1] * dp[i - 2];
	long long n;
	while (cin >> n) {
		cout << dp[n] << endl;
	}
}
