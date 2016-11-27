#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <fstream>

typedef long long sll;
typedef long sl;
typedef int si;
typedef double sd;
typedef long double sld;
typedef float sf;
typedef unsigned long long int sulli;
typedef char sc;

#define loop(i,a,b) for(i=a;i<=b;i++)
#define rloop(i,a,b) for(i=b;i>=a;i--)
#define maximum 10000

using namespace std;

void BIG_POWER (sll number , sll power)
{
	sll temp;
	
		sll carry , counter , i , key_term;
	    sll store , result_store[maximum];
	    /**intializing the value**/
	    temp = number;
	    carry = 0;
	    i = 0;
	    counter = 0;
	    key_term = 1;
	    /**divide the number into digit**/
	    while (temp!=0){
		    result_store[i] = temp % 10;
		    temp = temp / 10;
		    counter++;
		    i++;
	    }
	    while (key_term < power){
		    loop(i , 0 , counter - 1){
			    store = result_store[i] * number  + carry;
			    result_store[i] = store % 10;
			    carry = store / 10;
		    }
		    while (carry!=0){
			    result_store[i] = carry % 10;
			    carry = carry / 10;
			    counter++;
			    i++;
		    }	
		    key_term++;
	    }
	    // multipication start
	    sll carry2 = 0;
	    sll store2;
	    loop(i , 0 , counter - 1){
		    store2 = result_store[i] * power + carry2;
		    result_store[i] = store2 % 10;
		    carry2 = store2 / 10;
	    }
	    while (carry2!=0){
	    	result_store[i] = carry2 % 10;
	    	carry2 = carry2 / 10;
	    	counter++;
	    	i++;
	    }
	    /**rloop(i , 0 , counter - 1){
	    	cout << result_store[i];
	    }**/
	    cout << endl;
	    // end;
	    reverse (result_store , result_store + counter);
	    // reversing the multipication result //
	    // start adding //
		sll result_store_add[maximum];
		sll counter_add;
		sll store_add;
	    memset (result_store_add , 0 , sizeof result_store_add);
	    counter_add = 0;
	    sll carry_add = 0;
	    sll j = 0;
	    for (j=0;j<counter - 1;j++)
	    {
	    	store_add = result_store_add[j] + result_store[j] + carry_add;
	    	result_store_add[j] = store_add % 10;
	    	carry_add = store_add / 10;
	    }
	    while (carry_add!=0)
	    {
	    	result_store_add[j] = carry_add % 10;
	    	carry_add = carry_add / 10;
	    	counter++;
	    	j++;
	    }
	    for (j=counter - 1; j>=0; j--)
	    {
	    	cout << result_store_add[j];
	    }

}

int main ()
{
	sll number , power , limit;
	cin >> number >> limit;
	sll i;
	rloop(i , 1 , limit){
		BIG_POWER (number,i);
	}
}


