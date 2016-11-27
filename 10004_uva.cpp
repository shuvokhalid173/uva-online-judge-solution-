#include <bits/stdc++.h>
using namespace std;
int store[500];
int num[50];
int process (int n)
{
	int i = 0;
	int temp = n;
	int rem;
	while (n!=0){
		rem = n % 10;
		if (rem > 1){
			num[i] = 1;
		}
		else{
			num[i] = rem;
		}
		i++;
		n /= 10;
	}
	int j;
	int new_n = 0;
	for (j = i - 1; j >= 0; j--){
		new_n = new_n * 10 + num[j];
	}
	return new_n;
}
int main ()
{
	int n;
	cin >> n;
	int i = 0;
	while (n){
		///cout << process (n) << endl;
		store[i++] = process (n);
		n = n - process (n);
	}
	cout << i << endl;
	int j;
	for (j = i - 1; j >= 1; j--)
	cout << store[j] << " ";
	cout << store[0] << endl;
}
