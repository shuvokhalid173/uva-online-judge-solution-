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

int n_array[100005];
int q_array[30005];
int save[231];

int main ()
{
    int test_case;
    scanf ("%d" , &test_case);
    int c;
    for (c = 1; c <= test_case; c++){
            memset (save , -1 , sizeof (save));
        int n , q;
        scanf ("%d%d" , &n , &q);
        int i;
        for (i = 0; i < n; i++){
            scanf ("%d" , &n_array[i]);
        }
        int j;
        int m = 0;
        int y;
        while (q--){
            scanf ("%d" , &y);
            if (save[y]!=-1)
                printf ("%d\n" , save[y]);/// no need to repeat same calculation ///
            else
            {
                m = 0;
                for (i = 0; i < n; i++){
                    int val = y & n_array[i];
                    if (val > m){
                        m = val;
                    }
                }
                save[y] = m;
                printf ("%d\n" , save[y]);
            }
        }
    }
}
