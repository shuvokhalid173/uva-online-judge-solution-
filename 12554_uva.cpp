#include <bits/stdc++.h>
using namespace std;
int main ()
{
	vector < string > singer;
	vector < string > song;
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("Rujia");
	song.push_back("Happy");
	song.push_back("birthday");
	song.push_back("to");
	song.push_back("you");
	int test;
	scanf ("%d" , &test);
	while (test--){
		string people;
		cin >> people;
		singer.push_back(people);
	}
	int i , j;
	int size1 = singer.size();
	int size2 = song.size();
	int limit = max (size1 , size2);
	if (limit > 16 && limit%16!=0)
	limit = limit + (16 - limit % 16);
	for (i = 0; i < limit; i++){
		cout << singer[i % size1] << ": " << song[i % size2] << endl;
	}
}
