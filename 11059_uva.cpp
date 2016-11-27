#include <bits/stdc++.h>
using namespace std;
int main (){
	long long n;
	long long t = 1;
	while (scanf ("%lld" , &n)!=EOF){
		
		long long temp[25];
		long long res = 1;
		long long i , counter = 0;
		for (i = 0; i < n; i++){
			scanf ("%lld" , &temp[i]);
		}
		long long buffer = 0;
		for (int i = 0; i < n; i++){
			res = 1;
			for (int j = i; j < n; j++){
				res *= temp[j];	
				if (res > buffer){
					buffer = res;
				}
			}
			
		}
		printf ("Case #%lld: The maximum product is %lld.\n" , t++ , buffer);
		puts("");
	}
	return 0;
}
