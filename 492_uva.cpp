/*
   uva online judge 
   problem name :: pig-latin
   problem id :: 492
   note :: scanf (), printf () , gets () , use kora jabe na
           er jonno onek bar RE dekhaise
*/
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

bool valid_char (char a){
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) return true;
	else return false;
}

bool is_vowel (char a){
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
	return true;
	else return false;
}

string line;
vector < char > cc;
char cword[10000];

int main ()
{
    while (getline (cin , line)){
        int len = line.length();
        int i , j , k;
        bool ok = 0;
        string word;
        for (i = 0; i < len; i++){
        	if (valid_char (line[i])){
        		cc.push_back(line[i]);
        	}
        	else{
        		if (cc.size()){
        			if (is_vowel (cc[0])){
        				for (k = 0; k < cc.size(); k++){
        					cout << cc[k];
        				}cout << "ay";
        			}
        			else{
        				for (k = 1; k < cc.size(); k++){
        					cout << cc[k];
        				}
        				cout << cc[0] << "ay";
        			}
        			cc.clear();
        		}
        		cout << line[i];
        	}
        }
		for (j = 0; j < cc.size(); j++){
			if (is_vowel (cc[0])){
        		for (j = 0; j < cc.size(); j++){
        			cout << cc[j];
        		}cout << "ay";
        	}
        	else{
        		for (j = 1; j < cc.size(); j++){
        			cout << cc[j];
        		}
        		cout << cc[0] << "ay";
        	}
		}
		cc.clear();puts("");
    }
}
