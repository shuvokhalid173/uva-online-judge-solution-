///uva online judge ///
/// problem name Integer Inquiry ///
/// problem no. 424 ///
/// algorithm used simple big integer addition ///
/// note :: don't use strrev (build in) function to reverse ///
///         because it shows compilation errors ///
/// my solution ......

#include <bits/stdc++.h>
using namespace std;

char number[120];
int result[120];
int make_input[120];

int main ()
{
    memset (result , 0 , sizeof (result));
    while (cin >> number && !(strlen (number) == 1 && number[0] == '0')){
        int length = strlen (number);
        memset (make_input , 0 , sizeof (make_input));
        int i , j , x , carry = 0;
        for (j = 0; j < length; j++)
            make_input[j] = number[length - 1 - j] - '0';
        for (i = 0 ; i < 120; i++){
            x = result[i] + make_input[i] + carry;
            result[i] = x % 10;
            carry = x / 10;
        }
        while (carry){
            result[i++] += carry % 10;
            carry = carry / 10;
        }
    }
    int counter = 0;
    for (int i = 119; i >= 0; i--){
        if (result[i]){
            ///counter++;
            break;
        }
        counter++;
    }
    for (int i = 119 - counter; i >= 0; i--)
        cout << result[i];
    puts ("");
}
