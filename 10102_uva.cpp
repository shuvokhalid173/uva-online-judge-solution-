/****ALLAH IS ALMIGHTY****/

/**
	uva online judge;
	problem name :: The path in the colored field;
	problem id   :: 10102;
	catagory     :: ad_hoc , bfs (2d_grid);
	my solution .......................
**/
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
#define sfl(x) scanf ("%lld",&x)
#define pfl(x) printf("%lld\n",x)

struct point {
	int x , y;
	point () {}
	point (int x_ , int y_) {
		x = x_;
		y = y_;
	}
};

const int N = 1000;
const int inf = 10000;
queue < point > Q;
bool visited[N][N];
int level[N][N];
int fx[] = {0 , -1 , 0 , 1};
int fy[] = {1 , 0 , -1 , 0};
int n;

void goo (int sx , int sy) {
	memset (visited , false , sizeof (visited));
	visited[sx][sy] = true;
	level[sx][sy] = 0;
	Q.push(point (sx , sy));
	while (!Q.empty()) {
		point tops = Q.front();
		for (int i = 0; i < 4; i++) {
			int tx = tops.x + fx[i];
			int ty = tops.y + fy[i];
			if ((tx >= 0 && tx < n) and (ty >= 0 && ty < n) and !visited[tx][ty]) {
				visited[tx][ty] = true;
				Q.push(point (tx , ty));
				level[tx][ty] = level[tops.x][tops.y] + 1;
			}
		}
		Q.pop();
	}
}

char grid[N][N];
vector < point > one;
vector < point > three;

void clear__ () {
	one.clear();
	three.clear();
} 

int main () {
    while (cin >> n) {
	    clear__ (); 
    	for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> grid[i][j];
				if (grid[i][j] == '1') 
					one.push_back(point (i , j));
				if (grid[i][j] == '3') 
					three.push_back(point (i , j));
			}
		}
		int ret = -inf;
		for (int i = 0; i < one.size(); i++) {
			goo (one[i].x , one[i].y);
			int mm = inf;
			for (int j = 0; j < three.size(); j++) 
		    	mm = min (mm , level[three[j].x][three[j].y]);
			ret = max (ret , mm);		
		}
		pf(ret);	
    }
}
