/*
   uva online judge 
   problem no. 10905;
   problem name. children game;
   catagory ....... string sorting;
   
   solution description ...........
                        after reading the problem it seems to me very easy 
                        but later i relaize that it is not so easy that i think before;
                        because there are a lot of chance to get WA;
                        i can not find out any way to solve it;
                        
                        (i) first take the input as string;
                        (ii) sort the string in decending order ( using stl in c++ );
                        (iii) then add two consecutive string and compare them and swap;
                              ex :: suppose two string a and b;
                                    c = a + b;
                                    d = b + a;
                                    if (d > c)
                                    then swap (a , b);
                        (iv) do it untill satisfing the solution condition;
    
    my solution .............................
*/
#include <bits/stdc++.h>
using namespace std;
vector < string > str;
int main(){
	int n;
	while (scanf ("%d" , &n) && n){
		str.clear();
		string a;
		for (int i = 0; i < n; i++){
			cin >> a;
			str.push_back(a);
		}
		sort (str.begin() , str.end() , greater < string > ());
		for (int i = 0; i < str.size() - 1; i++){
			for (int i = 0; i < str.size() - 1; i++){
				if (str[i] + str[i + 1] < str[i + 1] + str[i] ){
					swap (str[i] , str[i + 1]);
				}
			}
		}
		for (int i = 0; i < str.size(); i++)
		cout << str[i];
		puts("");
	}
}
