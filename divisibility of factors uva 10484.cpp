

#include <iostream>
#include <memory.h>
using namespace std;
int primes[26] = {
2,
3,
5,
7,
11,
13,
17,
19,
23,
29,
31,
37,
41,
43,
47,
53,
59,
61,
67,
71,
73,
79,
83,
89,
97,
111 };
int cnt[30];

int  main()
{
int n , d;
cin >> n >> d;
while ( n || d ) {
if ( n==0)
cout << 1 << endl;
else {
if ( d<0 )
d = -d;
memset(cnt , 0 , sizeof(cnt));
int i = 0;
while ( primes[i] <= n ) {
int t = primes[i];
while ( t <= n ) {
cnt[i] += n/t;
t *= primes[i];
}
i ++;
}
i = 0;
while ( primes[i] <= n ) {
while ( d%primes[i]==0 ) {
cnt[i] --;
d /= primes[i];
}
i ++;
}
if ( d>1 )
cout << 0 << endl;
else {
long long r = 1;
i = 0;
while ( primes[i] <= n ) {
if ( cnt[i] )
r *= (long long)(cnt[i] + 1);
i ++;
}
cout << r << endl;
}
}
cin >> n >> d;
}
}

