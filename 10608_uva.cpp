/// In the name ALLAH , the Beneficent , the Merciful ///

#include <bits/stdc++.h>

using namespace std;

const int N = 500003;
vector <int> G[N]; 
bool visited[30003]; 
int cnt = 0;
set < int > st;

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
	for (int i = 0; i < 30003; i++) {
		G[i].clear ();
	}
	memset (visited , 0 , sizeof (visited)); 
	//memset (taken , 0 , sizeof (taken));
}

int main () {
	int T; 
	cin >> T; 
	while (T--) {
		clean_up (); 
		int n , m; 
		cin >> n >> m; 
		for (int i = 0; i < m; i++) {
			int x , y; 
			cin >> x >> y; 
			G[x].push_back (y); 
			G[y].push_back (x); 
		}
		int mx = 0; 
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				dfs (i);
				mx = max (mx , cnt);
				cnt = 0;
			}
		}
		cout << mx << endl;
	}
}
