/* 
   uva online judge 
   problem name:: A multiplication game
   problem id  :: 847; 
   note :: take input n;
           p = 1;
           multiply p by 9 once;
           and 2 another repeat it untill p cross n
           or equal to n;
           if it fullfill the condition by multiplying 2 the ollie win
           otherwise stan;
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long sll;
int main (){
	sll n;
	while (scanf ("%lld" , &n)){
		if (n <= 9)
		printf ("Stan wins.\n");
		else if (n >= 9 && n <= 18)
		printf ("Ollie wins.\n");
		else{
			sll p = 1 , c = 0;
			while (p < n){
				c++;
				if (c&1){
					p *= 9;
				}
				else p *= 2;
			}
			if (c&1) printf ("Stan wins.\n");
			else printf ("Ollie wins.\n");
		}
	}
}
