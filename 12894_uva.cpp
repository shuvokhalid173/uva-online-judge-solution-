#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1)
#define sf(x) scanf("%lf",&x)
double wide (double x){return  ((6.0 * x) / 10.0);}
double center (double x){return ((9.0 * x) / 20.0);}
double radius (double x){return (x / 5.0);}
int main (){
	int T;
	scanf ("%d" , &T);
	while (T--){
		double x0 , y0 , x1 , y1 , cx , cy , r;
		sf(x0);sf(y0);sf(x1);
		sf(y1);sf(cx);sf(cy);sf(r);
		x1 = x1 - x0;cx = cx - x0;
		y1 = y1 - y0;cy = cy - y0;
		if (wide (x1) == y1 && center (x1) == cx && y1 / 2.0 == cy && radius (x1) == r) puts("YES");
		else puts("NO");
	}
}
