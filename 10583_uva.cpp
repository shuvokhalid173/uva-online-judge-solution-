/// In the name ALLAH , the Beneficent , the Merciful ///

#include <bits/stdc++.h>

using namespace std;

const int N = 50003;
vector <int> G[N]; 
bool visited[N]; 
int cnt = 0;
set < int > st;
map < string , int > mp;
vector < string > vv;

void dfs (int u) {
	if (visited[u]) {
		//st.insert (u);
		return ; 
	}
	visited[u] = 1;
	cnt++;
	for (int i = 0; i < G[u].size(); i++) {
		int v = G[u][i]; 
		if (!visited[v]) {
			dfs (v);
		}
	}
}

void clean_up () {
	for (int i = 0; i < N; i++) {
		G[i].clear ();
	}
	memset (visited , 0 , sizeof (visited)); 
	mp.clear();
	vv.clear();
	//memset (taken , 0 , sizeof (taken));
}

int main () {
	int cs = 0;
	int nn , mm;
	while (cin >> nn >> mm) {
		if (nn == 0 && mm == 0) break;
		clean_up (); 
		for (int i = 0; i < mm; i++) {
			int x , y;
			cin >> x >> y; 
			G[x].push_back (y); 
			G[y].push_back (x); 
		}
		int mx = 0; 
		for (int i = 1; i <= nn; i++) {
			if (!visited[i]) {
				dfs (i);
				mx++;
			}
		}
		printf ("Case %d: %d\n" , ++cs , mx);
	}
}
