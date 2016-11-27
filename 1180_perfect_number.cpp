#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int i;
	for (i = 1; i <= n; i++){
		int p;
		cin >> p;
		if (p == 2 || p == 3 || p == 5 || p == 7 || p == 13 || p == 17 || p == 19){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
