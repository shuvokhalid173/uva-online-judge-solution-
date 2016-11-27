/**  uva online judge                                            *
  *  problem name   : Pseudoprime Number                         *
  *  problem id     : 11287                                      *
  *  time limit     : 3 seconds                                  *
  *  algorithm used : prime factorization and modular arithmetic *
  *  my solution                                                 *
**/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <cmath>
#include <cstdlib>
typedef long long sll;
typedef long sl;
typedef int si;
typedef double sd;
typedef long double sld;
typedef float sf;
typedef unsigned long long int sulli;
typedef char sc;
#define loop(i,a,b) for(i=a;i<=b;i++)
#define rloop(i,a,b) for(i=b;i>=a;i--)
#define sset(x , a) memset(x , a , sizeof (x))
#define pf printf
#define sf scanf
#define limit 1000000005
sll check_prime (sll n){
	sll key;
	sll i , sq;
	key = n;
	sq = sqrt (n);
	for (i = 2; i <= sq; i++){
		while (n % i == 0){
			n /= i;
		}
	}
	if (n == key){
		return 1;
	}
	else{
		return 0;
	}
}
sll big_mod (sll number , sll power , sll divisor){
	if (power == 0){
		return 1;
	}
	else if (power == 1){
		return number;
	}
	else if (power % 2 == 0){
		sll F;
		F = big_mod (number , power / 2 , divisor);
		return ((F % divisor) * (F % divisor)) % divisor;
	}
	else{
		sll Q;
		Q = big_mod (number , power - 1 , divisor);
		return ((number % divisor) * (Q % divisor)) % divisor;
	}
}
sll Fermat_test (sll p , sll a){
	if (big_mod (a , p , p) == a){
		return 1;
	} 
	else{
		return 0;
	}
}
int main (){
	sll p , a;
	while (sf ("%lld%lld" , &p , &a) == 2 && p!=0 && a!=0){
		if (check_prime (p) == 0 && Fermat_test (p , a) == 1){
			pf ("yes\n");
		}
		else{
			pf ("no\n");
		}
	}
	return 0;
}
