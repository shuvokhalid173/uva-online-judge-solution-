#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <cstdlib>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <fstream>
#include <bits/stdc++.h>
typedef long long sll;
typedef int si;
typedef long int sli;
typedef char sc;
typedef double sd;
typedef long double sld;
typedef unsigned long long int sulli;
using namespace std;
vector < long long > store; ///859963382]
long long array[150];
void ugly (){
	long long n;
	long long x = 0;
	for (n = 2; n <= 859963382; n++){
		
		long long i;
	long long sq = sqrt (n);
	store.clear();
	for (i = 2; i <= sq; i++){
		if (n % i == 0){
			while (n % i == 0){
				///cout << i << " ";
				store.push_back(i);
				n = n / i;
			}
		}
	}
	if (n > 1){
		///cout << n << endl;
		store.push_back(n);
	}
	long long j;
	long long size = store.size();
	///cout << endl;
	///cout << "the largest prime factor is " << store[size - 1] << endl;
	if (store[size - 1] <= 5){
		array[x++] = n;
	}
	}
	
}
int main (){
	ugly ();
	int n;
	cin >> n;
	cout << array[n] << endl;
	main ();
}
