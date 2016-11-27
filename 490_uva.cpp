#include <bits/stdc++.h>
using namespace std;

vector < string > ss;
char sent[103];
char cmatrix[103][103];

int main (){
	for (int i = 0; i < 103; i++){
		for (int j = 0; j < 103; j++){
			cmatrix[i][j] = ' ';
		}
	}/// initialize table with (white space) ///
	int mxlen = 0;
	int i = 0;
	while (gets (sent)){
		//if (strcmp (sent , "0") == 0) break;
		int len = strlen (sent);
		if (mxlen < len) mxlen = len;
		for (int j = 0; j < len; j++)
		cmatrix[i][j] = sent[j];
		i++;
	} /// taking input ///
	for (int m = 0; m < mxlen; m++){
		for (int n = i - 1; n >= 0; n--){
			cout << cmatrix[n][m];
		}puts("");
	}
}
