/*
   uva online judge 
   problem name :: permutation;
   problem no.  :: 941;
   catagory     :: ad-hoc , permutaion (no-need) , optimization;
   my solution........
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long sll;

sll iceil (sll a , sll b){
	if (a%b!=0) return a / b + 1;
	else return a / b;
}

char str[25];
vector < char > vch;
vector < char > NEW;

sll fact[25] = {1 , 1 , 2 , 6 , 24 , 
                120 , 720 , 5040 , 40320 ,
			    362880 , 3628800 , 39916800 ,
				479001600, 6227020800 , 87178291200 ,
				1307674368000 , 20922789888000 , 355687428096000 ,
                6402373705728000 , 121645100408832000 , 2432902008176640000};
                
int main (){
	sll T;
	scanf ("%lld" , &T);
	while (T--){
		vch.clear();
		NEW.clear();
		sll n;
		scanf ("%s%lld" , &str , &n);
		n = n + 1;
		sll len = strlen (str);
		vch.push_back (',');
		sort (str , str + len);
		for (int i = 0; i < len; i++)
		vch.push_back(str[i]);
		while (1){
			sll size = vch.size() - 1;
			if (size == 1){
				NEW.push_back (vch[1]);
				break;
			}
			sll ind = iceil (n , fact[size - 1]);
			NEW.push_back(vch[ind]);
			vch.erase(vch.begin() + ind);
			n = n - (fact[size - 1] * (ind - 1));
		}
		for (int i = 0; i < NEW.size(); i++)
		cout << NEW[i];
		puts("");
	}
}
