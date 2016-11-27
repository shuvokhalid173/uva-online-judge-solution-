#include<iostream>
#include<iomanip>
#include<math.h>
#define key 20
using namespace std;

int main()

{
	long long t,l,w,h,r;
	while(cin>>t)
	{
		for(long long i=1;i<=t;i++)
	{
		cin>>l>>w>>h;
		if(l<=key && w<=key && h<=key)
		cout<<"Case "<<i<<":good"<<endl;
		else 
		cout<<"Case "<<i<<":bad"<<endl;
	}
	}
	
	return 0;
}
