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
#define range 64726
#define MAX 1000005

int res[range + 5];
int arr[MAX];
bool flag[MAX];

int NOD (int n)
{
    int sq = (int) sqrt (n);
    int sum = 1;
    for (int i = 2; i <= sq; i++){
        int counter = 0;
        if (n % i == 0){
            while (n % i == 0){
                counter++;
                n /= i;
            }
            sum *= (counter + 1);
        }
    }
    if (n > 1)
        sum *= 2;
    return sum;
}

void call ()
{
    mem (flag , false);
    res[0] = 1;
    res[1] = 2;
    for (int i = 2; i <= range; i++){
        res[i] = res[i - 1] + NOD (res[i - 1]);
        flag[res[i]] = true;
    }
}

void ans ()
{
    int j = 0;
    arr[0] = 0;
    for (int i = 1; i <= MAX - 4; i++){
        arr[i] = arr[i - 1];
        if (i >= res[j]){
            arr[i] = arr[i] + 1;
            j++;
        }
    }
}

int main ()
{
    ///mem (flag , true);
    call ();
    ans ();

    int test_case;
    sdi (test_case);
    for (int i = 1; i <= test_case; i++){
        int A , B;
        sdii(A,B);
        int r = arr[B] - arr[A];
        if (flag[A]){
            r++;
        }
        printf ("Case %d: %d\n" , i , r);
    }
}
