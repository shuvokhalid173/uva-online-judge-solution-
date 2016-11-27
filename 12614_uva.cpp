#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int test;
	scanf ("%d" , &test);
	int i;
	for (i = 1; i <= test; i++){
		int nval;
		scanf ("%d" , &nval);
		int MAX = 0;
		while (nval--){
			int val;
			scanf ("%d" , &val);
			if (val > MAX)
			MAX = val;
		}
		printf ("Case %d: %d\n" , i , MAX);
	}
}
