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
#define limit 1000000
using namespace std;
long long diff[limit];
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
	for (i = 3; i <= limit; i += 2){
		if (check_bit (flag[i / 32] , i % 32) == 0){
			prime_store.push_back (i);
		}
	}
}
int main ()
{
    sieve ();
    memset (diff , 0 , sizeof (diff));
    long long lower , upper;
    scanf ("%lld%lld" , &lower , &upper);
    long long i = 0;
    while (prime_store[i] < lower);
    {
        i++;
    }
    cout << i << endl;
    long long counter = 0;
    while (prime_store[i + 1] <= upper){
        long long gap;
        gap = prime_store[i+1] - prime_store[i];
        diff[gap]++;
        counter++;
        i++;
    }

    long long j , maximum , t;
    long long index = 0;
    maximum = diff[0];
    for (j = 0;  j <= counter; j++)
    {
        if (maximum <= diff[j]){
            maximum = diff[j];
            index = j;
        }
    }
    cout << index << endl;
    main ();
}
