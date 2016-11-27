//uva online judge //
// problem no 11152 //
// problem name ... colourful flowers //
// time limit 3s //


//this is simple geometric problem //
// coding difficulty easy //
// here used simple math algorithm //
//formulas are given below//
        /*p = (a+b+c)/2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        R = (a*b*c)/(4*S);
        r = S/p;
        S_red = (PI*r*r);
        S_blue = S-S_red;
        S_yellow = (PI*R*R)-S;*/

#include<stdio.h>
#include<math.h>
#define PI acos(-1)


int main()

{
	double a,b,c;
	double p,S,R,r;
	while(scanf("%lf%lf%lf",&a,&b,&c)==3)
	{
		p = (a+b+c)/2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        R = (a*b*c)/(4*S);
        r = S/p;
        double S_red = (PI*r*r);
        double S_blue = S-S_red;
        double S_yellow = (PI*R*R)-S;
        printf("%.4lf %.4lf %.4lf\n",S_yellow,S_blue,S_red);
	}
	return 0;
}
