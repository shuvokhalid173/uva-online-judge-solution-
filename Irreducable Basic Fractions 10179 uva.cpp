/**  uva online judge                                *
  *  problem name   : Irreducable Basic Fraction     *
  *  problem id     : 10179                          *
  *  time limit     : 3 seconds                      *
  *  algorithm used : Euler's phi / Totient function *
  *  my solution                                     *
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
sll totient_function (sll n){
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
int main (){
	sll n;
	while (cin >> n && n!=0){
		cout << totient_function (n) << endl;
	}
	return 0;
}
