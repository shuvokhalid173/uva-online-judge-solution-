#include <stdio.h>
int mile (int n){return (n / 30) * 10 + 10;}
int juice (int n){return (n / 60) * 15 + 15;}
int min (int a , int b){if (a < b) return a;else return b;} 
int main (){
	int T;
	scanf ("%d" , &T);
	int i;
	for (i = 1; i <= T; i++){
		int ncd , cd;
		scanf ("%d" , &ncd);
		int mpac = 0 , jpac = 0;
		while (ncd--){
			scanf ("%d" , &cd);
			mpac += mile (cd);
			jpac += juice (cd);
		}
		if (mpac < jpac)
		printf ("Case %d: Mile %d\n" , i , mpac);
		else if (jpac < mpac) printf ("Case %d: Juice %d\n" , i , jpac);
		else printf ("Case %d: Mile Juice %d\n" , i , jpac);
	}
}
