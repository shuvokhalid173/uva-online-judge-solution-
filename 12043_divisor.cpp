#include <bits/stdc++.h>

#define ara 100002
long long int num_div[ara], sum_div[ara];
void divisors()
{
	
    int i, j, cnt, sum;
    for(i=1; i<=ara; i++)
    {
        for(j=i; j<=ara; j+=i)
        {
            cout << num_div[j]++ << endl;
            
        }
    }
}
int main()
{
    divisors();
    long long int a, b, k, p, sum, num, t, test;
    scanf("%lld",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%lld%lld%lld",&a,&b,&k);
        sum=0;
        num=0;
        for(p=a; p<=b; p++)
        {
            if(p%k==0)
            {
                num=num+num_div[p];
                sum=sum+sum_div[p];
            }
        }
        printf("%lld %lld\n",num,sum);
    }
    return 0;
}
