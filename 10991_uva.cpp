/******* header file ******/
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
/****** customize data type *********/
typedef long long sll;
typedef long int sli;
typedef unsigned int sui;
typedef long double sld;
/******* customization of loop *********/
#define loop(i,n) for(i=1;i<=n;i++)
#define rloop(i,n) for(i=n;i>=1;i--)
#define aloop(i,n) for(i=0;i<n;i++)
#define arloop(i,n) for(i=n-1;i>=0;i--)
/****** constant variable ************/
#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
#define RAD 0.01745329251994329576923690768489
#define eps 1e-9
/****** customization of operation *********/
#define p_b(x) push_back(x)
#define pp_b pop_back
#define whole(x) (x.begin(),x.end())
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n,x);
/****** some useful function *************/
int gcd (int a , int b){if (b == 0) return a;return gcd (b , a % b);}
int smax (int a , int b){if (a > b) return a;else return b;}
int smin (int a , int b){if (a < b) return a;else return b;}
int odd (int n){if (n&2) return 1;else return 0;}
int even (int n){if (n&2) return 0;else return 1;}
/************************************************************************************/
using namespace std;

int main (){
	int T;
	sf(T);
	while (T--){
		double r1 , r2 , r3;
		scanf ("%lf%lf%lf" , &r1 , &r2 , &r3);
		double a , b , c;
		a = r1 + r2;
		b = r2 + r3;
		c = r1 + r3;
		/***************************************************/
		double s;
		s = (a + b + c) / 2.0;
		double Tarea;
		Tarea = sqrt (s * (s - a) * (s - b) * (s - c));
		/***************************************************/
		double angle1 , angle2 , angle3;
		angle1 = acos (((a * a) + (c * c) - (b * b)) / (2.0 * a * c));
		angle2 = acos (((a * a) + (b * b) - (c * c)) / (2.0 * a * b));
		angle3 = acos (((b * b) + (c * c) - (a * a)) / (2.0 * b * c));
		/***************************************************/
		double Total_sector_area;
		Total_sector_area = ((r1 * r1 * angle1) + (r2 * r2 * angle2) + (r3 * r3 * angle3)) / 2.0;
		/***************************************************/
		//cout << Tarea << " " << Total_sector_area << endl;
		double ans;
		ans = Tarea - Total_sector_area;
		printf ("%.6lf\n" , ans);
	}
}
