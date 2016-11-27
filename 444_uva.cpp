#include <bits/stdc++.h>
using namespace std;

string str;
vector < int > ss;

int revn (int n){
	int s = 0;
	while (n){
		s = s * 10 + (n % 10);
		n /= 10;
	}
	return s;
}

int main (){
	while (getline (cin , str)){
		ss.clear();
		int len = str.size();
		if (str[0] >= '0' && str[0] <= '9'){
			reverse (str.begin() , str.end());
			int sum , m;
			sum = m = 0;
			char ch;
			while (m < len){
				if (str[m] - '0' == 1){
					sum = ((str[m] - '0') * 100) + ((str[m + 1] - '0') * 10) + str[m + 2] - '0';
					m += 3;
				}
				else{
					sum = ((str[m] - '0') * 10) + str[m + 1] - '0';
					m += 2;
				}
				ch = sum;
				cout << ch;
			}
			cout << endl;
		}
		else{
			for (int i = 0; i < len; i++)
			ss.push_back(str[i] + 0);
			for (int i = ss.size() - 1; i >= 0; i--)
			cout << revn (str[i] + 0);
			cout << endl;
		}
		str.clear();
	}
}
