/// In the name ALLAH , the Beneficent , the Merciful ///

#include <bits/stdc++.h>

using namespace std;

const int N = 5003;
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
	int nn , mm;
	while (cin >> nn >> mm) {
		if (nn == 0 && mm == 0) break;
		clean_up (); 
		int in = 1;
		for (int i = 0; i < nn; i++) {
			string ss; 
			cin >> ss;
			vv.push_back (ss); 
			if (!mp[ss]) {
				mp[ss] = in++;
			}
		}
		for (int i = 0; i < mm; i++) {
			string x , y;
			cin >> x >> y; 
			G[mp[x]].push_back (mp[y]); 
			G[mp[y]].push_back (mp[x]); 
		}
		int mx = 0; 
		for (int i = 0; i < vv.size(); i++) {
			if (!visited[mp[vv[i]]]) {
				dfs (mp[vv[i]]);
				mx = max (mx , cnt);
				cnt = 0;
			}
		}
		cout << mx << endl;
	}
}
