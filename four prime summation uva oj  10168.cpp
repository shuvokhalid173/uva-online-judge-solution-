#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#define T 1
#define F 0

unsigned long long int  prime (unsigned long long int n)
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
	unsigned long long int d,i,j,k,l,m,c=0;
	while (scanf("%lld",&m)==1)
    {
        if(m<8)
            printf("Impossible.\n");
        else
            {
               c=0;
               for(i=1;i<=m;i++)
	           for(j=1;j<=m;j++)
	           for(k=1;k<=m;k++)
	           for(l=1;l<=m;l++)
	           {
		           if(prime(i)==1 && prime(j)==1 && prime(k)==1 && prime(l)==1 && i+j+k+l==m)
	               {
	    	           printf("%lld %lld %lld %lld\n",i,j,k,l);
                       c++;
	               }
                   if(c==1)
                   break;
               }
            }
    }
    return 0;
}

