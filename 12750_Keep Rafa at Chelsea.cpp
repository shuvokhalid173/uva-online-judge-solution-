#include <bits/stdc++.h>
using namespace std;
char str[500];
int main (){
	long long t;
	scanf ("%lld" , &t);
	long long i;
	for (i = 1; i <= t; i++){
		long long n;
		scanf ("%lld" , &n);
		///char c;
		long long j;
		for (j = 0; j < n; j++){
			cin >> str[j];
		}
		long long counter = 0 , nc = 0;
		for (j = 0; j < n; j++){
			if (str[j] == 'W'){
				nc = 0;
			}
			else{
				nc++;
				if (nc == 3){
					break;
				}
			}
			counter++;
		}
		if (nc == 3){
			printf ("Case %lld: %lld\n" , i , counter + 1);
		}
		else{
			printf ("Case %lld: Yay! Mighty Rafa persists!\n" , i);
		}
	}
	return 0;
}
