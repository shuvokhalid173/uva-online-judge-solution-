#include <bits/stdc++.h>
#define pcf(x) printf("x")
using namespace std;
int button[1005];
int press[1005];
int main (){
	int t;
	char c = '"';
	scanf ("%d" , &t);
	while (t--){
		int n;
		scanf ("%d" , &n);
		int i;
		for (i = 0; i < n; i++)
		scanf ("%d" , &button[i]);
		for (i = 0; i < n; i++)
		scanf ("%d" , &press[i]);
		
		int j;
		for (j = 0; j < n; j++){
			if (button[j] == 1 && press[j] == 1){
				cout << ".";
			}
			else if (button[j] == 1 && press[j] == 2){
				cout << ",";
			}
			else if (button[j] == 1 && press[j] == 3){
				cout << "?";
			} 
			else if (button[j] == 1 && press[j] == 4){
				cout << c;
			}
			else if (button[j] == 2 && press[j] == 1){
				cout << "a";
			}
			else if (button[j] == 2 && press[j] == 2){
				cout << "b";
			} 
			else if (button[j] == 2 && press[j] == 3){
				cout << "c";
			}
			else if (button[j] == 3 && press[j] == 1){
				cout << "d";
			}
			else if (button[j] == 3 && press[j] == 2){
				cout << "e";
			} 
			else if (button[j] == 3 && press[j] == 3){
				cout << "f";
			}
			else if (button[j] == 4 && press[j] == 1){
				cout << "g";
			}
			else if (button[j] == 4 && press[j] == 2){
				cout << "h";
			} 
			else if (button[j] == 4 && press[j] == 3){
				cout << "i";
			}
			else if (button[j] == 5 && press[j] == 1){
				cout << "j";
			}
			else if (button[j] == 5 && press[j] == 2){
				cout << "k";
			} 
			else if (button[j] == 5 && press[j] == 3){
				cout << "l";
			}
			else if (button[j] == 6 && press[j] == 1){
				cout << "m";
			}
			else if (button[j] == 6 && press[j] == 2){
				cout << "n";
			} 
			else if (button[j] == 6 && press[j] == 3){
				cout << "o";
			}
			else if (button[j] == 7 && press[j] == 1){
				cout << "p";
			}
			else if (button[j] == 7 && press[j] == 2){
				cout << "q";
			} 
			else if (button[j] == 7 && press[j] == 3){
				cout << "r";
			}
			else if (button[j] == 7 && press[j] == 4){
				cout << "s";
			}
			else if (button[j] == 8 && press[j] == 1){
				cout << "t";
			}
			else if (button[j] == 8 && press[j] == 2){
				cout << "u";
			} 
			else if (button[j] == 8 && press[j] == 3){
				cout << "v";
			}
			else if (button[j] == 9 && press[j] == 1){
				cout << "w";
			}
			else if (button[j] == 9 && press[j] == 2){
				cout << "x";
			} 
			else if (button[j] == 9 && press[j] == 3){
				cout << "y";
			}
			else if (button[j] == 9 && press[j] == 4){
				cout << "z";
			} 
			else if (button[j] == 0 && press[j] == 1){
				cout << " ";
			}
		}
		cout << endl;
	}
}
