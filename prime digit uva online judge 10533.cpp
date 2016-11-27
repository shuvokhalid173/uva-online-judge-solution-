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
#define maximum 100000

using namespace std;

char sieve[500000];
int dpCount[1000000];

char isPrime(int n){
    if (n == 2)
        return 1;
    else if (! (n % 2))
        return 0;
    else {
        return sieve[(n-1)/2];
    }
}

int digitSum(int a)
{
    static char tempStr[10];
    static int len, sum;
    int i;

    sum = 0;
    sprintf(tempStr,"%d",a);
    len = strlen(tempStr);
    for (i = 0; i < len; i++)
	{
        sum += (tempStr[i] - '0');
    }

    return sum;
}

void init()
{
    int i, cur;
    memset(sieve,1,sizeof(sieve));
    memset(dpCount,0,sizeof(dpCount));

    // sieve of eratosthenes //
    sieve[0] = 0;
    for (i = 3; i <= 1001; i+=2)
	{
        if (sieve[(i-1)/2])
		{
            cur = 3*i;
            while (cur < 1000000)
			{
                sieve[(cur-1)/2] = 0;
                cur = cur + i + i;
            }
        }
    }

    // DP //
    dpCount[0] = 0;
    dpCount[1] = 0;
    dpCount[2] = 1;
    for (i = 3; i < 1000000; i++){
        if (isPrime(i) && isPrime( digitSum(i) ))
		{
            dpCount[i] = dpCount[i-1] + 1;
        }
        else
		{
            dpCount[i] = dpCount[i-1];
        }
    }
}

int main()
{
    int N, i, first, last;

    init();

    scanf("%d",&N);
    for (i = 0; i < N; i++)
	{
        scanf("%d %d",&first,&last);
        printf("%d\n",dpCount[last]-dpCount[first-1]);
    }

    return 0;
}
