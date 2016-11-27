#include <bits/stdc++.h>
using namespace std;

char num[1004];
int number[1004];

int main(){
	int n;
	while (scanf ("%d%s" , &n , &num)){
		int len;
		len = strlen (num);
		if (n == 0 && len == 1 && num[0] == '0'){
			break;
		}
		int i;
		for (i = 0; i <= len; i++){
			if ((num[i] - '0') - n == 0)
			number[i] = 0;
			else number[i] = num[i] - '0';
		}
		bool ok = false;
		for (i = 0; i < len; i++){
			if (number[i]){
				printf ("%d" , number[i]);
				ok = true;
			}
		}
		if (!ok) printf ("0");
		puts("");
	}
}
