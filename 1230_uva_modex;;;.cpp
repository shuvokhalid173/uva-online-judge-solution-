#include <bits/stdc++.h>
using namespace std;

long long big_mod (long long x , long long y , long long z){
	if (y == 0){
		return 1;
	}
	else if (y == 1){
		return x;
	}
	else if (y % 2 == 0){
		long long f;
		f = big_mod (x , y / 2 , z);
		return ((f % z) * (f % z)) % z;
	}
	else{
		long long g;
		g = big_mod (x , y - 1 , z);
		return ((g % z) * (x % z)) % z;
	}
}

int main (){
	long long t;
	while (scanf ("%lld" , &t) == 1 && t!=0){
		long long i;
		for (i = 1; i <= t; i++){
			long long x , y , z;
			scanf ("%lld%lld%lld" , &x , &y , &z);
			printf ("%lld\n" , big_mod (x , y , z));
		}
	}
	return 0;
}
