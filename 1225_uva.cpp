#include <bits/stdc++.h>
using namespace std;
int main (){
	long long t;
	scanf ("%lld" , &t);
	long long i;
	while (t--){
		long long n;
		long long array[10];
		scanf ("%lld" , &n);
		long long j;
		memset (array , 0 , sizeof (array));
		for (j = 1; j <= n; j++){
			long long key;
			key = j;
			while (key){
				array[key % 10]++;
				key /= 10;
			}
		}
		long long k;
		for (k = 0; k < 10; k++){
			printf ("%lld " , array[k]);
		}
		printf ("\n");
	}
	return 0;
}
