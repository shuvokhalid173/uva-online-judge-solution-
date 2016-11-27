/// uva online judge
/// BIg number problem
/// count the tree
/// Id 10007;
/// formula used :::    (2n)! / (n+1)! ;;;;;;
/**
    suppose n = 5;
    2n = 10 , n + 1 = 6; amader uporer solution ber korte hbe
    akhon 10! = 10 * 9 * 8 * 7 * 6! / 6! = 10 * 9 * 8 * 7 = ans
    so amader division er kono dorkar nai just multiply n + 1 to 2n;
**/

#include <bits/stdc++.h>
#define  limit 10000

using namespace std;

int main ()

{
	long long n,store[limit];
	long long carry, i, counter;
	long long x,temp,b;

	while (cin >> n && n!=0)

	{
	    if (n == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            	carry = 0;
		i = 0;
		counter = 0;
		n = n * 2;
		b = (n / 2) + 1;
		temp = n;

	    while (temp!=0)

	    {
		   store[i++] = temp%10;
		   temp = temp/10;
		   counter++;
	    }

	    while (n>b + 1)

	    {
		   for (i=0;i<counter;i++)

		      {
			     x = store[i] * (n-1) + carry;
			     store[i] = x%10;
			     carry = x/10;
		      }

		   while (carry>0)

		     {
		        store[i++] = carry%10;
			    carry = carry/10;
		    	counter++;
		     }

		    n--;
	    }
	    for (i=counter-1;i>=0;i--)

        {
		    cout << store[i];
	    }

	    cout << endl;
	}
        }


	return 0;
}
