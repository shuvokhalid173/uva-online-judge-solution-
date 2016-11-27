/// uva online judge 
/// uva 10433
/// automorphic number;
/// my solution 
/// shows TLE

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <set>
#include <cmath>
#include <cstdlib>
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
#define sset(x , a) memset(x , a , sizeof (x))
#define pf printf
#define sf scanf
using namespace std;
#define limit 5000
int main (){
	char first_number[limit];
	char second_number[limit];
	char third_number[limit];
	memset (first_number , '0' , limit);
	memset (second_number , '0' , limit);
	int temp[limit];
	int res[limit];
	while (cin >> first_number){
		if (first_number[0] == '0'){
			printf ("Not an Automorphic number.\n");
		}
		else{
			memset (temp , 0 , sizeof temp);
			memset (res , 0 , sizeof res);
			strcpy (third_number , first_number);
			int length1 , length2 , l;
			length1 = strlen (first_number);
			length2 = length1;
			reverse (first_number , first_number + length1);
			strcpy (second_number , first_number);
			int i , j , k;
			int x , y = 0 , p , px = 0;
			for (i = 0; i < length1; i++){
				int counter = 0;
				int carry = 0;
				for (p = 0; p < y; p++){
					temp[p] = 0;
					counter++;
				}
				for (j = 0; j < length2; j++){
					//temp[i + j] += ((first_number[i] - '0') * (second_number[j] - '0')) % 10; 
					//temp[i + j + 1] += ((first_number[i] - '0') * (second_number[j] - '0')) / 10;
			 		x = ((first_number[i] - '0') * (second_number[j] - '0')) + carry;
			 		temp[j + p] = x % 10;
			 		carry = x / 10;
			 		counter++;
				}
				while (carry){
					temp[j + p++] = carry % 10;
					carry = carry / 10;
					counter++;
				}
				int no;
				int carry2 = 0;
				for (k = 0; k < counter; k++){
					no = res[k] + temp[k] + carry2;
					res[k] = no % 10;
					carry2 = no / 10;
					//counter++;
				}
				while (carry2){
					res[k++] = carry2 % 10;
					carry2 /=10;
					counter++;
				}
				px = counter;
				y++;
				memset (temp , 0 , sizeof temp);
			}
			int fix = 0;
			for (l = px - 1; l >=0; l--){
				if (res[l] == 0){
					fix++;	
				}
				else{
					break;
				}
			}
			if (px - fix == 0){
				cout << px - fix;
			}
			int comcounter = 1;
			for (l = length1 - 1; l >= 0; l--){
				if (res[l]!=(second_number[l] - '0')){
					comcounter = 0;
					break;
				}
			}
			if (comcounter == 0){
				printf ("Not an Automorphic number.\n");
			}
			else{
				printf ("Automorphic number of %d-digit.\n" , length1);
			}
		}	
	}
	return 0;
}
