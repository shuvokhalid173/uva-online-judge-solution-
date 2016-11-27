/// uva online judge
/// problem name bionomial shutdown
/// problem no. 530
/// time limit 3s;
/// algorithm used ... number theory , ncr using gcd;
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

int gcd (int a , int b){
	if (b == 0)
	return a;
	return gcd (b , a % b);
}

int ncr (int n , int r){
	vector < int > number;
	int m;
	m = min (r , n - r);
	for (int i = 0; i < m; i++)
	number.push_back (n - i);
	int j , index = 0;
	for (j = 1; j <= m; j++){
		int key;
		key = j;
		index = 0;
		while (key!=1){
			int g;
			g = gcd (key , number[index]);
			number[index] /= g;
			key /= g;
			index++;
		}
	}
	int ans = 1;
	for (int i = 0; i < m; i++){
		ans *= number[i];
	}
	return ans;
}

int main (){
	int n , r;
	while (sdii(n,r) == 2){
		if (n == 0 && r == 0){
			break;
		}
		spdi(ncr (n , r));
	}
}
