#include <bits/stdc++.h>

using namespace std;

string ss;

int count_digit (int n) {
	int cnt = 0; 
	while (n) {
		n /= 10; 
		cnt++;
	}
	return cnt;
}

int main () {
	while (cin >> ss) {
		if (ss == "END") break;
		if (ss == "1") {
			cout << ss << endl;
		}
		else {
			int l = ss.size();
		int ff = l; 
		int fs = count_digit (l); 
		int i = 2;
		while (1) {
			if (ff == fs) {
				break;
			}
			ff = fs;
			fs = count_digit (fs);
			i++;
		}
		cout << i << endl;
		}
		
		ss.clear ();
	}
}
