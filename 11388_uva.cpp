#include <bits/stdc++.h>
typedef long long sll;
using namespace std;
int main (){
	sll T;
	scanf ("%lld" , &T);
	while (T--){
		sll G , L;
		scanf ("%lld%lld" , &G , &L);
		if (L % G == 0) 
		printf ("%lld %lld\n" , G , L);
		else printf ("-1\n");
	}
}
