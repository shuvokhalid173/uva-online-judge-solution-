/*uva online judge 
problem name : Digit sum 
problem id   : 12517
time limit   : 1s 
my solution */

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <set>

using namespace std;

long long digit_sum (long long n)
{
	long long sum=0,rem;
	while(n!=0){
		rem=n%10;
		n=n/10;
		sum +=rem;
	}
	
	return sum;
}

int main()
{
	long long a,b,i,sum=0;
	while(cin>>a>>b && a!=0 && b!=0){
		sum=0;
		for(i=a;i<=b;i++){
			long long s=digit_sum(i);
			sum=sum+s;
		}
		cout<<sum<<endl;
	}
	return 0;
}
