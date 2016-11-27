#include <bits/stdc++.h>
using namespace std;
int gcd_ (int a , int b){
	if (b == 0) return a;
	return gcd_ (b , a % b);
}
char line[100000];
int main (){
	int case_;
	scanf ("%d\n" , &case_);
	while (case_--){
		
		gets (line);
		stringstream ss (line);
		vector < int > store;
		int number;
		while (ss >> number){
			store.push_back (number);
		}
		int MAX , temp;
		MAX = temp = 0;
		for (int i = 0; i < store.size (); i++){
			for (int j = i + 1; j < store.size (); j++){
				temp = gcd_ (store[i] , store[j]);
				if (temp > MAX){
					MAX = temp;
				}
			}
		}
		printf ("%d\n" , MAX);
	}
}
