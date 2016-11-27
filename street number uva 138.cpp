/* uva online judge
problem no 138
problem name street number
time limit-- 3s

algorithm...

this is simple math type problem

here I used Guess method

n2=6n1-n0
n3=6n2-n1 and so on;

x2=n2+n1+x1;
x3=n3+n2+x2; and so on;
my solution */

#include<iostream>
#include<iomanip>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>

using namespace std;

int main()

{
	long long n1=1,n0=0;
	long long i=1,x1=1;
	while(i<=10)
	{
		long long n2=(6*n1)-n0;
		x1=n2+n1+x1;
		n0=n1;
		n1=n2;
		cout<<n1<<"         "<<x1<<endl;
		i++;
	}
   return 0;
}
