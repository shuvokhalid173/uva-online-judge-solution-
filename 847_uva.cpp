#include <bits/stdc++.h>
using namespace std;

typedef long long sll;
sll turn[40] = {9 , 2 , 9 , 2 , 9 , 2 ,
                9 , 2 , 9 , 2 , 9 , 2 , 
				9 , 2 , 9 , 2 , 9 , 2 , 
				9 , 2 , 9 , 2 , 9 , 2 , 
				9 , 2 , 9 , 2 , 9 , 2};

int main (){
	sll n;
	while (scanf ("%lld" , &n) == 1){
		sll i = 0 , sum = 1;
		while (1){
			if (sum >= n) break;
			sum *= turn[i++];
		}
		if (turn[i] == 2) puts("Stan wins.");
		else puts("Ollie wins.");
	}
}
