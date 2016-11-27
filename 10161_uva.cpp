/****ALLAH IS ALMIGHTY****/

#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d\n",x)
typedef long long sll;
#define sfl(x) scanf("%lld",&x)
#define pfl(x) printf("%lld\n",x)

int main () {
    sll n;
    while (sfl(n) && n) {
        sll row , col;
        row = col = 0; sll sq = sqrt (n);
        sll stay = 0;
        if (sq * sq == n) stay = sq;
        else stay = sq + 1;
        sll test1 = (stay * stay) - n;
        if (test1 < stay){
            row = stay;
            col = test1 + 1;
        }
        else if (test1 >= stay){
            row = stay - ((test1 - stay) + 1);
            col = stay;
        }
        if (stay % 2 == 1) printf ("%lld %lld\n" , col , row);
        else printf ("%lld %lld\n" , row , col);
    }
}
