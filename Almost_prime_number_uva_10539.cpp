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
#define limit 100000000
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
	prime_store.clear ();
	prime_store.push_back (2);
	for (i = 3; i < limit; i += 2){
		if (check_bit (flag[i / 32] , i % 32) == 0){
			prime_store.push_back (i);
		}
	}
}

int main (){
    sieve ();long long q;
    long long n;
    while (scanf ("%lld" , &n)!=EOF){
        if (n <= 4 || n == 6){
        	printf ("%lld is not the sum of two primes!\n" , n);
        }
        else if (n % 2 == 1){
        	long long p = n - 2;
        	if (binary_search (prime_store.begin () , prime_store.end () , p)){
        		printf ("%lld is the sum of %lld and %lld.\n" , n , 2 , p);
        	}
        	else{
        		printf ("%lld is not the sum of two primes!\n" , n);
        	}
        }
        else{
        	long long i = 0;
        	
        	while (1)
        		q = n - prime_store[i];
        		if (binary_search (prime_store.begin() , prime_store.end() , q)){
        			if (prime_store[i] > n / 2){
        				break;
        			}
        		}
        		i++;
        	}
        	///printf ("%lld + %lld = %lld\n" , q ,n - q , n);
        	if (q < n / 2){
        		printf ("%lld is the sum of %lld and %lld.\n" , n , q ,n - q);
        	}
        	else{
        		printf ("%lld is not the sum of two primes!\n" , n);
        	}
        }return 0;
    }
    


