#include <bits/stdc++.h>
using namespace std;
char str[205];
int main (){
	int T;
	scanf ("%d" , &T);
	int i;
	for (i = 1; i <= T; i++){
		scanf ("%s" , &str);
		printf ("Case %d: " , i);
		int len;
		len = strlen (str);
		int j = 0;
		while (j < len){
			///if (str[j] >= 'A' && str[j] <= 'Z')
			///char ch = str[j];
			int k;
			int sum = 0;
			for (k = j + 1; k < len; k++){
				if (str[k] >= '0' && str[k] <= '9'){
					sum = sum * 10 + (str[k] - '0');
				}
				else{
					break;
				}
			}
			int l;
			for (l = 1; l <= sum; l++){
				cout << str[j];
			}
			///cout << "j = " << j << "k == "<< k << " ";
			j = k;
		}
		puts("");
	}
}
