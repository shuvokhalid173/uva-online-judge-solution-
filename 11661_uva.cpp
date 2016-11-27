/// In the name ALLAH , the Beneficent , the Merciful ///

#include <bits/stdc++.h>

using namespace std;

char arr[2000003]; 

int main () {
	int n;
	while (cin >> n) {
		if (!n) break;
		int ans = 12345678;
		bool x = false ;
		int r = 0 , d = 0;
		for (int i = 1; i <= n; i++) {
			cin >> arr[i]; 
			if (arr[i] == 'Z') {
				x = true;
			}
			if (arr[i] == 'R') {
				r = i;
				if (d) {
					ans = min (ans , r - d);
				}
			}
			if (arr[i] == 'D') {
				d = i;
				if (r) {
					ans = min (ans , d - r);
				}
			}
		}
		if (x) {
			ans = 0;
		}
		cout << ans << endl;
	}
}
