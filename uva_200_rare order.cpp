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

char word[23];
char table[5005][23];
int test[100];

int main ()
{
	memset (test , 0 , sizeof (test));
	int i = 0;
	while (cin >> word){
		if (word[0] == '#'){ 
			break;
		}
		int length = strlen (word);
		int j;
		/// construct a table ////
		for (j = 0; j < length; j++){
			table[i][j] = word[j];
		}
		/// initializing the table with (dot) . ///
		while (j < 22){
			table[i][j++] = '.';
		}
		i++;
	}
	/// our work of making table has finished ///
	/// now we swap ( row , coloumn ) for printing accroding to the problem ///
	int m , n;
	for (m = 0; m < 22; m++){
		for (n = 0; n < i; n++){
			///cout << table[n][m];
			if (table[n][m]!='.'){///avoid dot . for proper calculation ///
				int temp;
				temp = table[n][m] - 65;/// make the value of each character serially like A = 1 , B = 2 ...
				test[temp]++;
				if (test[temp] == 1){
					cout << table[n][m];
				}
			}
		}
		//cout << endl;
	}
	cout << endl;
}
