#include <bits/stdc++.h>
using namespace std;
char str[50000];
int main ()
{
	int counter = 0;
	while (gets (str)){
		int len;
		len = strlen (str);
		int i;
		for (i = 0; i < len; i++){
                if (str[i] == '"'){
                    counter++;
                    if (counter % 2 == 0){
                        cout << "''";
                    }
                    else
                        cout << "``";
                }
                else
                    cout << str[i];
	   }
	   cout << endl;
     }
}
