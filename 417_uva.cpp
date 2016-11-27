#include <bits/stdc++.h>

using namespace std; 

map < string , int > mp;

int cnt = 1;

void gooo (string ss , int sz) {
	if (ss.length() == sz) {
		mp[ss] = cnt++;
		return ;
	}
	char ll;
	if (ss == "") {
		ll = 'a';
	}
	else {
		ll = ss[ss.size() - 1] + 1;
	}
	for (char i = ll; i <= 'z'; i++) {
		gooo (ss + i , sz);
	}
} 

int main () {
	for (int i = 1; i <= 5; i++) {
		gooo ("" , i);
	}
	string str;
    while(getline(cin, str)) {
        printf("%d\n", mp[str]);
    }
}
