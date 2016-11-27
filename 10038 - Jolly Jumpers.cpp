#include <bits/stdc++.h>
using namespace std;
#define limit 3010
int main (){
	int n;
	while (scanf ("%d" , &n) == 1){
		int num[limit] , num1[limit];
		int i;
		for (i = 0; i < n; i++){
			scanf ("%d" , &num[i]);
		}
		for (i = 1; i < n; i++){
			num1[i - 1] = i;
		}
		for (i = 0; i < n - 1; i++){
			num[i] = abs (num[i] - num[i + 1]);
		}
		sort (num , num + n - 1);
		int flag = 1;
		for (i = 0; i < n - 1; i++){
			if (num[i]!=num1[i]){
				flag = 0;
				break;
			}
		}
		if (flag == 0){
			printf ("Not jolly\n");
		}
		else{
			printf ("Jolly\n");
		}
	}
	return 0;
}
