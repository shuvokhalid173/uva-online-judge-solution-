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
#define limit 1003
#define limit1 103
using namespace std;
long long save[limit][limit1];
long long weight[limit];
long long cost[limit];
long long N , capacity;
long long super_sale (long long index , long long iw)
{
    long long taken1;
    long long taken2;
    if (index == N + 1)
    {
        return 0;
    }
    if (save[index][iw]!=-1)
    {
        return save[index][iw];
    }
    if (iw + weight[index] <= capacity)
    {
        taken1 = cost[index] + super_sale (index + 1 , iw + weight[index]);
    }
    else
    {
        taken1 = 0;
    }
    taken2 = super_sale (index + 1 , iw);
    save[index][iw] = max (taken1 , taken2);
    return save[index][iw];
}
int main ()
{
    //memset (save , -1 , sizeof (save));
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> cost[i] >> weight[i];
        }
        long long x;
        cin >> x;
        long long sum = 0;
        while (x--)
        {
            memset (save , -1 , sizeof (save));
            cin >> capacity;
            sum = sum + super_sale (0 , 0);
        }
        cout << sum << endl;
    }
    return 0;
}
