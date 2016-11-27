/**********************************************
    * uva online judge                      *
    * problem name   :: smith number;       *  
    * problem id     :: 10042;              *
    * time limit     :: 3 second;           *
    * algorithm used :: prime factorization *
    *                                       *
***********************************************/
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
#include <bitset>
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
using namespace std;
/** ei sum_of_prime_divisor function ta (n) er jotogula 
    prime divisor ase tader digiter summation ber kore **/
sll sum_of_prime_divisor (sll n){
	vector < sll > vstore;
	sll i;
	for (i = 2; i <= sqrt (n); i++){
		while (n % i == 0){
			vstore.push_back(i);
			n = n / i;
		}
	}
	if (n > 1){
		vstore.push_back(n);
	}
	sll sum = 0;
	sll j;
	if (vstore.size() == 1){
		return 1;
	}
	for (j = 0; j < vstore.size(); j++){
		while (vstore[j]!=0){
			sum = sum + vstore[j] % 10;
			vstore[j] /= 10;
		}
	}
	return sum;
}
/** ei function ta kono number er digit er sum ber kore; **/
sll sum_of_digit (sll n){
	sll sum = 0;
	while (n!=0){
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}
/** ei function ta test kore je number ta ki smith number naki smith number na ; **/
sll smith_number (sll n){
	sll spd;
	sll sd;
	spd = sum_of_prime_divisor (n);
	sd = sum_of_digit (n);
	if (spd == sd){
		return 1;
	}
	else{
		return 0;
	}
}
/** driver function ta use kore problem onujaee input nea hoese andoutput dakhano hoese ; **/
int main (){
	sll test_case;
	scanf("%lld" , &test_case);
	sll j;
	for (j = 1; j <= test_case; j++){
		sll n;
		cin >> n;
		sll i;
		for (i = n + 1; i; i++){
			if (smith_number (i) == 1){
				printf ("%lld\n" , i);
				break;
			}
		}
	}
	return 0;
}
