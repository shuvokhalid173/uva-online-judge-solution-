/*     accepted    */
#include <bits/stdc++.h>
using namespace std;

char num[1005];
int degree (int n);
int sum_of_digit (int n);

int main (){
	while (scanf ("%s" , &num)!=EOF){
		int len;
		len = strlen (num);
		if (len == 1 && num[0] == '0'){
			break;
		}
		int number = 0;
		int i;
		for (i = 0; i < len; i++){
			number += (num[i] - '0');
		}
		if (number % 9 == 0)
		printf ("%s is a multiple of 9 and has 9-degree %d.\n" , num , degree (number));
		else printf ("%s is not a multiple of 9.\n" , num);
	}
}

int sum_of_digit (int n){
	int sum = 0;
	while (n){
		sum += (n % 10);
		n /= 10;
	}return sum;
}

int degree (int n){
	int c = 1;
	while (n > 9){
		n = sum_of_digit (n);
		c++;
	}
	return c;
}
