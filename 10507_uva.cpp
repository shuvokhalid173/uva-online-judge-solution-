/// In the name ALLAH , the Beneficent , the Merciful ///

#include <bits/stdc++.h>

using namespace std;

const int N = 5003;
vector <int> G[N]; 
bool visited[N]; 
int cnt = 0;
set < int > st;
map < char , int > mp;
vector < char > vv;
map < char , int > check; 

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
	check.clear();
	//memset (taken , 0 , sizeof (taken));
}

int main () {
	int n; 
	while (cin >> n) {
		clean_up();
		int m; 
		cin >> m; 
		string awake_series; 
		cin >> awake_series;
		int in = 1; 
		for (int i = 0; i < awake_series.size(); i++) {
			check[awake_series[i]] = 1;
			if (!mp[awake_series[i]]) {
				mp[awake_series[i]] = in++;
				vv.push_back(awake_series[i]);
			}
		}
		G[mp[awake_series[0]]].push_back (mp[awake_series[1]]);
		G[mp[awake_series[1]]].push_back (mp[awake_series[0]]);
		G[mp[awake_series[1]]].push_back (mp[awake_series[2]]); 
		G[mp[awake_series[2]]].push_back (mp[awake_series[1]]);
		int year = 0;
		for (int i = 0; i < m; i++) {
			string conn; 
			cin >> conn; 
			char x = conn[0]; 
			char y = conn[1];
			if (!mp[x]) {
				mp[x] = in++;
				vv.push_back(x);
			} 
			if (!mp[y]) {
				mp[y] = in++;
				vv.push_back(y);
			}
			if (check[x] == 0 && check[y] == 1) {
				year++;
				check[x] = 1;
			}
			if (check[x] && !check[y]) {
				year++;
				check[y] = 1;
			}
			G[mp[x]].push_back (mp[y]); 
			G[mp[y]].push_back (mp[x]);
		}
		dfs (mp[vv[0]]);
		int ct = 0; 
		for (int i = 0; i < vv.size(); i++) {
			if (visited[mp[vv[i]]]) {
				ct++;
			}
		}
		if (ct == vv.size()) {
			printf ("WAKE UP IN, %d, YEARS\n" , year);
		}
		else {
			cout << "THIS BRAIN NEVER WAKES UP" << endl;
		}
	}
}
