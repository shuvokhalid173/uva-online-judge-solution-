#include <bits/stdc++.h>
#define limit 1000010
long long result[limit];
long long first_number[limit];
long long second_number[limit];
long long num[limit];
using namespace std;
int main (){
	long long n;
	scanf ("%lld" , &n);
	long long i;
	for (i = 1; i <= n; i++){
		long long m;
		scanf ("%lld" , &m);
		memset (result , 0 , sizeof result);
		memset (result , 0 , sizeof first_number);
		memset (result , 0 , sizeof second_number);
		long long x , y , j;
		for (j = 0; j < m; j++){
			scanf ("%lld%lld" , &x , &y);
			first_number[j] = x;
			second_number[j] = y;
		}
		reverse (first_number , first_number + m);
		reverse (second_number , second_number + m);
		long long sum;
		long long carry = 0;
		long long counter = 0;
		long long c;
		for (c = 0; c < m; c++){
			sum = first_number[c] + second_number[c] + carry;
			result[c] = sum % 10;
			carry = sum / 10;
			counter++;
		}
		while (carry){
			result[c++] = carry % 10;
			carry /= 10;
			counter++;
		}
		for (c = m - 1; c >= 0; c--){
			printf ("%lld" , result[c]);
		}
		printf ("\n");
	}
	return 0;
}
