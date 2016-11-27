#include <iostream>
#include <iomanip>
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
 
#define stream istringstream
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
#define sdii(x,y) scanf("%d%d",&x,&y)
#define SDs(x) scanf("%s",x)
#define uu first
#define vv second
 
using namespace std;

#define limit 1005
int array[limit];
int sumofdivisor (int n){
	int i;
	int sq;
	sq = (int) sqrt (n);
	int sum = 1;
	for (i = 2; i <= sq; i++){
		int counter = 0;
		if (n % i == 0){
			while (n % i == 0){
				counter++;
				n /= i;
			}
			///cout << i << "^" << counter << " + ";
			sum = sum * (pow (i , counter + 1) - 1) / (i - 1);
		}
	}
	if (n > 1)
	///cout << n << "^1" << endl;
	sum = sum * (pow (n , 2) - 1) / (n - 1);
	return sum;
}
int main (){
	for (int i = 1; i <= limit; i++){
		array[i] = sumofdivisor (i);
	}
	int s;
	while (scanf ("%d" , &s) == 1){
		if (s == 0){
			break;
		}
		int x , counter = 0;
		for (x = s; x >= 1 ; x--){
			if (array[x] == s){
				cout << x << endl;
				break;
			}
			counter++;
		}
		if (counter == s)
		cout << "-1" << endl;
	}
}
