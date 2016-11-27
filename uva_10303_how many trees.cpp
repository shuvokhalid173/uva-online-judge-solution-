/// uva online judge
/// problem name how_many_trees
/// problem no. 10303
/// time limit 3s;
/// algorithm used ... catalan number , number theory , gcd , big integer multipication
/// my solution
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

long long ans[10005];
long long gcd (long long a , long long b){
	if (b == 0)
	return a;
	return gcd (b , a % b);
}

int main (){
	long long n;
	while (cin >> n){
		vector < long long > number;
		long long dn = 2 * n;
		long long i;
		for (i = 0; i < n - 1; i++)
		number.push_back (dn - i);
		long long j , index = 0;
		for (j = 2; j <= n; j++){
			long long key;
			key = j;
			index = 0;
			while (key!=1){
				long long g;
				g = gcd (key , number[index]);
				number[index] /= g;
				key /= g;
				index++;
			}
		}
		ans[0] = 1;
		long long x;
		long long carry = 0;
		long long counter = 1;
		long long t , b;
		for (b = 0; b < n - 1; b++){
			for (t = 0; t < counter; t++){
				x = ans[t] * number[b] + carry;
				ans[t] = x % 10;
				carry = x / 10;
			}
			while (carry){
				ans[t] = carry % 10;
				carry /= 10;
				counter++;
				t++;
			}
		}
		long long l;
		for (l = counter - 1; l >= 0; l--){
			cout << ans[l];
		}
		cout << endl;
	}
	return 0;
}
