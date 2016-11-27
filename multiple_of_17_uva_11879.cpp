/// uva online judge
/// problem name :: multiple of 17
/// problem id :: 11879
/// algorithm used :: brute force .. go to the first position of char array 
///                                 find mod with 17 and make number with next digit,,, continue till length;
/// my solution

#include <bits/stdc++.h>
using namespace std;

#define MAX 110
char str[MAX];

int main (){
	while (scanf ("%s" , &str) == 1){
		if (strlen (str) == 1 && str[0] == '0'){
			break;
		}
		int len = strlen (str);
		int i;
		int s = 0;
		for (i = 0; i < len; i++){
			s = ((s * 10) + (str[i] - '0')) % 17;
		}
		///cout << s << endl;
		if (s == 0){
			printf ("1\n");
		}
		else{
			printf ("0\n");
		}
	}
}
