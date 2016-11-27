#include <bits/stdc++.h>

using namespace std;

const int N = 17;
double dist[N][N];
double dp[1<<N];
//map < string , int > mp;
map < int ,  pair < int , int > > mp;
const int inf = (1<<28);
int n;

struct bits_ {
	int Set (int n , int pos) {return n = n | (1<<pos);}
	int Reset (int n , int pos) {return n = n & ~ (1<<pos);}
	bool check (int n , int pos) {return (bool) (n & (1<<pos));}
}bit;

double distance__ (pair < int , int > p, pair < int , int > q) {
	int x = q.first - p.first;
	int y = q.second - p.second;
	return sqrt (double (x * x) + double (y * y));
}

double gooo (int mask) {
	if (mask == (1<<n) - 1)
		return 0;
	if (dp[mask] != -1.0)
		return dp[mask];
	double ret = double (inf);
	int i ;
	for (i = 0; i < n; i++) {
		if (!bit.check(mask , i)) {
			break;
		}
	}
	for (int j = i + 1; j < n; j++) {
		if (!bit.check(mask , j)) {
			ret = min (ret , dist[i][j] + gooo (mask | (1<<j) | (1<<i)));
		}
	}
	return dp[mask] = ret;
}

int main () {
	int g; cin >> g;
	n = g * 2;
	for (int i = 0; i < n; i++) {
		string ss;
		int x , y;
		cin >> ss >> x >> y;
		mp[i] = {x , y};
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				dist[i][j] = 0.0;
			else dist[i][j] = distance__ (mp[i] , mp[j]);
		}
	}
	for (int i = 0; i < (1<<N); i++) dp[i] = -1.0;
	cout << gooo (0) << endl;
}

