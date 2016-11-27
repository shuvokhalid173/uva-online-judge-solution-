/******* header files *******/
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
/******* customization of loop *********/
#define loop(i,n) for(i=1;i<=n;i++)
#define rloop(i,n) for(i=n;i>=1;i--)
#define aloop(i,n) for(i=0;i<n;i++)
#define arloop(i,n) for(i=n-1;i>=0;i--)
/****** constant variable ************/
#define INF (1<<28)
#define PI 3.14159265358979323846264338327950
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
template < typename sdt > sdt gcd (sdt a , sdt b){if (b == 0) return a;return gcd (b , a % b);}
template < typename sdt > sdt odd (sdt n){if (n&2) return 1;else return 0;}
template < typename sdt > sdt even (sdt n){if (n&2) return 0;else return 1;}
template < typename sdt > sdt mod (sdt n , sdt ex , sdt div){if (ex == 0) return 1;if (ex == 1) return n;
else if (ex % 2 == 0){sdt x = mod (n , ex / 2 , div);return ((x % div) * (x % div)) % div;}
else return (((mod (n , ex - 1 , div)) % div) * (n % div)) % div;}
template < typename sdt > sdt lcm (sdt a , sdt b){return (a * b) / gcd (a , b);}
/************************************************************************************/

using namespace std;

int ara[60];
char str[200];
int main ()
{
	memset (ara , 0 , sizeof (ara));
	int ln;
	scanf ("%d\n" , &ln);
	while (ln--){
		gets(str);
		int i;
		int len;
		len = strlen (str);
		for (i = 0; i < len; i++){
			if (str[i] >= 'a' && str[i] <= 'z'){
				ara[str[i] - 'a']++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z'){
				ara[str[i] - 'A']++;
			}
		}
	}
	/***for (int j = 0; j < 26; j++){
		char ch;
		ch = 97 + j;
		cout << ch << "-->" << ara[j] << endl;
	}
	cout << endl; puts("");**/
	int j;
	int mx;
	int ind;
	char c;
	int k;
	for (j = 0; j < 26; j++){
		mx = 0;
		ind = 0;
		for (k = 0; k < 26; k++){
			if (ara[k] && mx < ara[k]){
				mx = ara[k];
				ind = k;
			}
		}
		ara[ind] = 0;
		c = 65 + ind;
		if (mx)
		cout << c << " " << mx << endl;
	}
}
