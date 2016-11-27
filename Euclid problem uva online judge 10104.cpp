#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define val -1

long long small (long long a,long long b)

{
	long long key;
	if(a>b)
	{
		key=a;
	}
	else
	{
		key=b;
	}
	return key;
}

long long gcd_func (long long a, long long b)

{
	long long key,i;
	key=small(a,b);
	for(i=key;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		break;
	}
	return i;
}

int main()

{
	long long i,j,a,b,s,t,u,v=0;
	scanf("%lld%lld",&a,&b);
	long long key;
	key=small(a,b);
	u=gcd_func(a,b);
	for(i=key;i>=val*key;i--)
	for(j=key;j>=val*key;j--)
	{
	    if(a*i+b*j==u && i<j)
        s=i;
        t=j;
	    printf("%lld %lld %lld\n",i,j,u);

	}

	main();
}
