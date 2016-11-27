#include <bits/stdc++.h>
using namespace std;

bool is_valid (char a){
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) return true;
	else return false;
}

char line[1000];

int main (){
	while (gets (line)){
		int len = strlen (line);
		int counter = 0 , i , res = 0;
		for (i = 0; i < len; i++){
			if (is_valid (line[i])){
				counter = 1;
			}
			else{
				res += counter;
				counter = 0;
			}
		}
		if (is_valid (line[len - 1])) res++;
		cout << res << endl;
	}
}
