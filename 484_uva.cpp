#include <bits/stdc++.h>
using namespace std;

int a[100000] , s[100000] = {0};

int main (){
	int n , size = 0;
	while (scanf ("%d" , &n)!=EOF)
	 a[size++] = n;
	for (int i = 0; i < size; i++){
		int c = 0;
		if (!s[i]){
			for (int j = i + 1; j < size; j++){
				if (a[i] == a[j]){
					c++; s[j] = 1;
				}
			}
			printf ("%d %d\n" , a[i] , ++c);
		}
	}
}
