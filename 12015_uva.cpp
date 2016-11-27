#include <bits/stdc++.h>
using namespace std;

vector < string > address;
vector < int > rating;

int main (){
	int T;
	scanf ("%d" , &T);
	int i , j;
	string wn;
	int rate;
	for (i = 1; i <= T; i++){
		address.clear();
		rating.clear();
		int mx = 0;
		for (j = 1; j <= 10; j++){
			cin >> wn;
			cin >> rate;
			if (mx < rate) mx = rate;
			address.push_back(wn);
			rating.push_back(rate);
		}
		int k;
		printf ("Case #%d:\n" , i);
		for (k = 0; k < address.size(); k++){
			if (rating[k] == mx)
			cout << address[k] << endl;
		}
	}
}
