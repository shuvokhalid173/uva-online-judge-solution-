/****ALLAH IS ALMIGHTY****/

#include <bits/stdc++.h>

using namespace std ;

typedef long long sll; 

sll dp[123]; 

sll gooo (sll n) {
	if (n == 1) return 1;
	if (n == 2) return 2; 
	if (n == 3) return 2;
	if (dp[n] != -1) return dp[n];
	else dp[n] = gooo (n - 2) + gooo (n - 3);
	return dp[n];
} 

int main () {
	memset (dp , -1 , sizeof (dp));
	sll m; 
	while (scanf ("%lld" , &m) != EOF) {
		cout << gooo (m) << endl;
	}
}
