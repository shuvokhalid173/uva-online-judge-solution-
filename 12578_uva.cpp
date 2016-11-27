#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1)
int main ()
{
	int test;
	scanf ("%d" , &test);
	while (test--){
		double length;
		scanf ("%lf" , &length);
		double width = (6 * length) / 10;
		double totalarea = length * width;
		double redarea = PI * ((length * length) / 25);
		double greenarea = totalarea - redarea;
		printf ("%.2lf %.2lf\n" , redarea , greenarea);
	}
}
