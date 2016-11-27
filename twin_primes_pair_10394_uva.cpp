/** uva online judge 
    problem name   :: twin primes
	probelm id     :: 10394
	time limit     :: 3 second
	algorithm used :: prime_sieve and simple optimization
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
#define sset(x , a) memset(x , a , sizeof (x))
#define pf printf
#define sf scanf
#define limit 20000000
using namespace std;

bool flag[limit];
vector < sll > prime_store;

void sieve (){
	sset(flag , false);
	flag[0] = flag[1] = true;
	sll sq = sqrt (limit);
	sll i , j;
	for (i = 4; i <= limit; i += 2){
		flag[i] = true;
	}
	for (i = 3; i <= sq; i += 2){
		if (flag[i] == false){
			for (j = i * i; j <= limit; j += i){
				flag[j] = true;
			}
		}
	}
	prime_store.clear();
	prime_store.push_back(2);
	for (i = 3; i < limit; i += 2){
		if (flag[i] == false){
			prime_store.push_back(i);
		}
	}
}

int main (){
	sll i;
	sieve ();
	vector < sll > prime_pair;
	for (i = 2; i < prime_store.size(); i++){
		if (prime_store[i] - prime_store[i - 1] == 2){
			prime_pair.push_back (prime_store[i - 1]);
		}
	}
	sll s;
	while (sf ("%lld" , &s)!=EOF){
		pf ("(%lld, %lld)\n" , prime_pair[s - 1] , prime_pair[s - 1] + 2);
	}
	return 0;
}
