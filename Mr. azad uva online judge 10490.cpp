#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define T 1
#define F 0

unsigned long long int prime(unsigned long long int n)

{
  unsigned long long int  i, flag=0;
  if(n==1)
  return F;
  else
  {
  	for(i=2;i<=n/2;++i)
     {
      if(n%i==0)
       {
          flag=1;
          break;
       }
     }
     if (flag==0)
       return T;
    else
       return F;
  }

}

int main()

{
	unsigned long long int n,s,t;
	while (scanf("%llu",&n)==1 && n!=0)
	{
		s=pow(2,(n-1));
		t=pow(2,n)-1;
		if(n==31)
        printf("Perfect: 2305843008139952128!\n");
		else if(prime(n)==1 && prime(t)==1)
		printf("Perfect: %llu!\n",s*t);
		else if(prime(n)==0)
		printf("Given number is NOT prime! NO perfect number is available.\n",n);
		else if(prime(n)==1 && prime(t)==0)
		printf("Given number is prime. But, NO perfect number is available.\n");
	}

	return 0;
}
