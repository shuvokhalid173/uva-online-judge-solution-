#include<stdio.h>
#include<math.h>

unsigned long long int power (unsigned long long int n)

{
	unsigned long long int a,b,c;
	a=pow(2,(n-1));
	b=pow(2,n)-1;
	c=a*b;
	return c;
}

int main()

{
	unsigned long long int i,j,c,n,sum=0;
	unsigned long long int t;
	scanf("%llu",&t);
	for(j=1;j<=t;j++)
	{
		sum=0;
		scanf("%llu",&n);
	c=power(n);
	for(i=1;i<c;i++)
	{
		if(c%i==0)
		sum +=i;
		
	}
	if(sum==c)
	printf("Yes\n");
	else 
	printf("No\n");
	}
	
	return 0;
}
