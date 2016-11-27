/** not submitted
**/
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <fstream>
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
using namespace std;
sll sum = 0;
sll phi_function (sll n){
	if (n == 1){
		return n;
	}
	sll key;
	key = n;
	if (n % 2 == 0){
		key = key - key / 2;
		while (n % 2 == 0){
			n = n / 2;
		}
	}
	sll i;
	for (i = 3; i <= sqrt (n); i = i + 2){
		if (n % i == 0){
			key = key - key / i;
			while (n % i == 0){
				n = n / i;
			}
		}
	}
	if (n > 1){
		key = key - key / n;
	}
	return key;
}

sll depth_of_phi (sll n){
	sll counter = 0;
	while (n!=1){
		n = phi_function (n);
		counter++;
	}
	return counter;
}

sll SODF (sll n , sll m){
	sll i;
	sll sum = 0;
	loop(i , n , m){
		sum += depth_of_phi (i);
	}
	return sum;
}
int main (){
	sll test;
	SODF ();
	scanf ("%lld",&test);
	sll i;
	loop(i , 1 , test){
		sll n , m;
		scanf ("%lld%lld",&n,&m);
		sll x;
		x = SODF (n , m);
		printf ("%lld\n" , x);
	}
	return 0;
}
