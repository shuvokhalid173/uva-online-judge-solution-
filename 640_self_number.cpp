#include <bits/stdc++.h>
using namespace std;
#define limit 1000000
long long array[limit+2];
vector < long long > self_number;
long long sum_of_digit (long long n){
	long long sum = 0;
	while (n!=0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
void generator (){
	cout << "1" << endl;
	long long n;
	n = 1;
	long long x;
	for (n = 1; n <= limit; n++){
		x = n + sum_of_digit (n);
		array[x - 1] = 1;
	}
	///sort (store.begin() , store.end());
	long long i;
	for (i = 1; i <= limit; i++){
		if (array[i]!=1){
			cout << i+1 << endl;
		}
	}
}
int main (){
	generator ();
}
