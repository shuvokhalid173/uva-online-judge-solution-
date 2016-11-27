#include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector < string > ss;
    int test;
    scanf ("%d\n" , &test);
    test *= 2;
    while (test--){
        string slogans;
        getline(cin , slogans);
        ss.push_back(slogans);
    }
    int test1;
    scanf ("%d\n" , &test1);
    while (test1--){
        string next_slogan;
        getline(cin , next_slogan);
        int i;
        for (i = 0; i < ss.size(); i++){
            if (next_slogan == ss[i]){
                cout << ss[i+1] << endl;
                break;
            }
        }
    }
}
