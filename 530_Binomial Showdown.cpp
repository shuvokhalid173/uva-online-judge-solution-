#include <bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define PB push_back

int main()
{
    long long n,k,result,min,max,i,j,var;
    map<long long, int>mp;
    while(cin>>n>>k)
    {
        mp.clear();
        if(n==0 && k==0)
        return 0;
        result=1;
        if(k>n-k)
        {
            max=k;
            min=n-k;
        }
        else
        {
            max=n-k;
            min=k;
        }
        for(i=n;i>max;i--)
        {
            result*=i;
            for(j=2;j<=min;j++)
            {
                if(result%j==0 && mp[j]!=1)
                {
                    result/=j;
                    mp[j]=1;
                }
            }
        }
    cout<<result<<endl;
    }
return 0;
}
