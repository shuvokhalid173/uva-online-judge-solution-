/****ALLAH IS ALMIGHTY****/

#include <bits/stdc++.h>

using namespace std ;

const int NN = 54721360;

int main () {
	long long N , cs = 0;
	while (scanf ("%lld" , &N) == 1) {
		if (!N) {
			break;
		}
		double ans = (3.0 + sqrt (9.0+ (8.0 * (double) N))) / 2.0;
		printf ("Case %lld: %.0lf\n" , ++cs , ceil (ans));
	}
}
