#include <bits/stdc++.h>
using namespace std;
int gcd_ (int a , int b){
	if (b == 0) return a;
	return gcd_ (b , a % b);
}
int main (){
	int case_;
	scanf ("%d\n" , &case_);
	while (case_--){
		char line[100000];
		int store[105];
		gets (line);
		stringstream ss (line);
		int number;
		int counter = 0;
		while (ss >> number){
			store[counter] = number;
			counter++;
		}
		int MAX , temp;
		MAX = temp = 0;
		for (int i = 0; i < counter; i++){
			for (int j = i + 1; j < counter; j++){
				temp = gcd_ (store[i] , store[j]);
				if (temp > MAX){
					MAX = temp;
				}
			}
		}
		printf ("%d\n" , MAX);
	}
}
