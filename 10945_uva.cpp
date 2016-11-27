#include <bits/stdc++.h>
using namespace std;

char str[1050];
///char ch[1050];
vector < char > ch;
int main (){
	while (gets(str) && strcmp (str , "DONE")!=0){
		ch.clear();
		int len;
		len = strlen (str);
		int i;
		int j = 0;
		for (i = 0; i < len; i++){
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
				if (str[i] >= 'A' && str[i] <= 'Z'){
					//ch[j++] = str[i] + 32;
					char c;
					c = str[i] + 32;
 					ch.push_back(c);
				}
				else ch.push_back(str[i]);
			}
		}
		bool ok = true;
		int k;
		int l = ch.size();
		for (k = 0; k < l; k++){
			if (ch[k]!=ch[l - 1 - k]){
				ok = false;
				break;
			}
		}
		if (ok) cout << "You won't be eaten!" << endl;
		else cout << "Uh oh.." << endl;
	}
}
