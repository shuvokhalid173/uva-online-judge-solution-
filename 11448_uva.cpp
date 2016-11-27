/** use minimum limit 10000 **/
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
int gcd (int a , int b){if (b == 0) return a;return gcd (b , a % b);}
int smax (int a , int b){if (a > b) return a;else return b;}
int smin (int a , int b){if (a < b) return a;else return b;}
int odd (int n){if (n&2) return 1;else return 0;}
int even (int n){if (n&2) return 0;else return 1;}
/************************************************************************************/
using namespace std;

#define limit 10008
char first_number[limit];
char second_number[limit];
int result[limit];

int neg_zero (char *str){
	int len = strlen (str);
	int i;
	int cf = 0;
	for (i = 0; i < len; i++){
		if (str[i] == '0'){
			cf++;
		}
		else break;
	}
	return cf;
}

bool cmp (char *f_num , char *s_num){
	int flen , slen;
	flen = strlen (f_num);
	slen = strlen (s_num);
	int fpos , spos;
	fpos = neg_zero (f_num);
	spos = neg_zero (s_num);
	int nflen , nslen;
	nflen = flen - fpos;
	nslen = slen - spos;
	int first_number[nflen + 1];
	int second_number[slen + 1];
	memset (first_number , 0 , sizeof (first_number));
	memset (second_number , 0 , sizeof (second_number));
	for (int p = fpos; p < flen; p++)
	first_number[p - fpos] = f_num[p] - '0';
	for (int p = spos; p < slen; p++)
	second_number[p - spos] = s_num[p] - '0';
	///for (int p = 0; p < nflen; p++)
	///cout << first_number[p];puts("");
	///for (int p = 0; p < nslen; p++)
	///cout << second_number[p];puts("");
	if (nflen > nslen)
	return 1;
	else if (nflen < nslen)
	return 0;
	else{
		int y;
		bool ok = false;
		for (y = 0; y < nflen; y++){
			if (first_number[y] > second_number[y]){
				return 1;
				ok = true;
				break;
			}
			else if (first_number[y] < second_number[y]){
				return 0;
				ok = true;
				break;
			}
		}
		if (!ok) return 1;
	}
}

void subtract (char *f_num , char *s_num){
	int flen , slen;
	flen = strlen (f_num);
	slen = strlen (s_num);
	int fpos , spos;
	fpos = neg_zero (f_num);
	spos = neg_zero (s_num);
	int nflen , nslen;
	nflen = flen - fpos;
	nslen = slen - spos;
	int first_number[nflen + 1];
	int second_number[nflen + 1];
	memset (first_number , 0 , sizeof (first_number));
	memset (second_number , 0 , sizeof (first_number));
	for (int p = fpos; p < flen; p++)
	first_number[p - fpos] = f_num[p] - '0';
	for (int p = spos; p < slen; p++)
	second_number[p - spos] = s_num[p] - '0';
///	for (int p = 0; p < nflen; p++)
///	cout << first_number[p];puts("");
///	for (int p = 0; p < nslen; p++)
///	cout << second_number[p];puts("");
	reverse (first_number , first_number + nflen);
	reverse (second_number , second_number + nslen);
	int i , j = 0, x;
	int carry = 0;
	for (i = 0; i < nflen; i++){
		second_number[i] += carry;
		if (first_number[i] < second_number[i])
		first_number[i] += 10;
		x = first_number[i] - second_number[i];
		carry = first_number[i] / 10;
		result[j++] = x;
	}
	int l , c = 0;
	for (l = j - 1; l >= 0; l--){
		if (result[l] == 0){
			c++;
		}
		else break;
	}
	if (c == j)
	cout << "0";
	for (l = j - c - 1; l >= 0; l--)
	cout << result[l];
	puts("");
}

int main (){
	int T;
	scanf ("%d" , &T);
	while (T--){
		memset (first_number , '0' , limit);
		memset (second_number , '0' , limit);
		cin >> first_number >> second_number;

		if (cmp (first_number , second_number))
		subtract (first_number , second_number);
		else{
			cout << "-";
			subtract (second_number , first_number);
		}
	}
}
