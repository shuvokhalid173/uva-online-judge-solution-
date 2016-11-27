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
#define limit 100010041
using namespace std;

bool check_bit (long long n , long long position){
	return (bool) (n & (1 << position));
}

long long set_bit (long long n , long long position){
	return n = n | (1 << position);
}

long long flag[limit / 32];
vector < long long > prime_store;
long long status[limit];
void sieve ();
void sieve (){
	memset (flag , 0 , sizeof (flag));
	long long i , j;
	long long sq;
	sq = int (sqrt (limit));
	for (i = 3; i <= sq; i += 2){
		if (check_bit (flag[i / 32] , i % 32) == 0){
			for (j = i * i; j <= limit; j += 2 * i){
				flag[j / 32] = set_bit (flag[j / 32] , j % 32);
			}
		}
	}
	//prime_store.clear ();
	//prime_store.push_back (2);
	for (i = 3; i < limit; i += 2){
		if (check_bit (flag[i / 32] , i % 32) == 0){
			prime_store.push_back (i);
		}
	}
}

long long counter_prime (long long low , long long high){
	sieve();
	long long i;
	long long counter = 0;
	sort (prime_store.begin() , prime_store.end());
	for (i = low; i <= high; i++){
		long long p;
		p = i * i + i + 41;
		if (binary_search (prime_store.begin() , prime_store.end() , p)){
			counter++;
		}
	}
	return counter;
}

int main (){
	long long low;
	long long high;
	while (scanf ("%lld%lld" , &low , &high) == 2){
		long long val;
		double result;
		long long counter;
		counter = counter_prime (low , high);
		val = (high - low) + 1;
		result = (counter * 100.0) / val;
		printf ("%.2lf\n", result);
	//	cout << count_prime (low , high) << endl;
	}
	return 0;
}

