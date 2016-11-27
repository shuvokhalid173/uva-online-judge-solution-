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
#include <iterator>

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repv(i,n) for(int i=n-1; i>=0; i--)
#define repl(i,n) for(int i=1; i<=(int)n; i++)
#define replv(i,n) for(int i=n; i>=1; i--)

#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
#define pb(x) push_back(x)
#define ppb pop_back
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x));
#define eps 1e-9
#define pii pair<int,int>
#define pmp make_pair

#define sdi(x) scanf("%d",&x)
#define spdi(x) printf("%d\n",x)
#define sdii(x,y) scanf("%d%d",&x,&y)
#define SDs(x) scanf("%s",x)
#define uu first
#define vv second
using namespace std;
int main ()
{
    long long digit;
    while (scanf ("%lld" , &digit)!=EOF){
        if (digit == 2){
            printf ("00\n");
            printf ("01\n");
            printf ("81\n");
        }
        else if (digit == 4){
            printf ("0000\n");
            printf ("0001\n");
            printf ("2025\n");
            printf ("3025\n");
            printf ("9801\n");
        }
        else if (digit == 6){
            printf ("000000\n");
            printf ("000001\n");
            printf ("088209\n");
            printf ("494209\n");
            printf ("998001\n");
        }
        else if (digit == 8){
            printf ("00000000\n");
            printf ("00000001\n");
            printf ("04941729\n");
            printf ("07441984\n");
            printf ("24502500\n");
            printf ("25502500\n");
            printf ("52881984\n");
            printf ("60481729\n");
            printf ("99980001\n");
        }
        else{
            break;
        }
    }
}
