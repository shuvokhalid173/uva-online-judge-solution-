/* uva online judge 
   problem no 12765 
   time limit 3s
   problem no factorial product 
   my solution shows wrong answer 
   but why i don't know */

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <math.h>

using namespace std;

long double factorial (long double n)

{
    long double r=1;
    for(long double i=2;i<=n;i++)
    {
        r*=i;
    }
    return r;
}

int main ()
{
    long double m,n,num1,num2;
    while (cin>>m>>n)
    {
    	if(m==0 && n==0)
    	break;

    	long double sum1=1;

        for(long double i=1;i<=m;i++)

        {
        	cin>>num1;
        	long double fac1=factorial(num1);
        	sum1=sum1*fac1;
        }

        long double t=sum1;

        long double sum2=1;

        for(long double j=1;j<=n;j++)

        {
        	cin>>num2;
        	long double fac2=factorial(num2);
        	sum2=sum2*fac2;
        }

        long double s=sum2;

        if(t==s)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}


