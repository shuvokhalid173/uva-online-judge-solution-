#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

double myfunction (double a,double b,double c)

{
	double s=(a+b+c)/2;
	double p=s*(s-a)*(s-b)*(s-c);
	double r=sqrt(p);
	double res=r*(4.000/3.000);
	return res;
}

int main()

{
	double a,b,c,result;
	for(int i=1;i<=1000;i++)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		result=myfunction(a,b,c);
		if(result>0)
		printf("%.3lf\n",result);
		else
		{
			result==-1;
		    printf("%.3lf\n",result);
		}
	}
}

