#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
// dp[i][j] ??i????j???????
long long dp[301][1001] = {0};

int main()
{
    // ??
    dp[0][0] = 1;
    for (int i = 0; i <= 300; ++i)          // i???
        for (int j = 0; j + i <= 300; ++j)  // j+i???j??????
            for (int k = 1; k <= 1000; ++k) // ??k???
                dp[j+i][k] += dp[j][k-1];   // ??k?????j+i???????
                                            // ??k-1?????j???????
    // Input & Output
    ios::sync_with_stdio(false);
    string line;
    int n[3];
    while (getline(cin, line)) {
        stringstream ss(line);
        int i = 0;
        while (ss >> n[i]) ++i;
        switch(i){
            case 1: printf("%lld\n", dp[n[0]][1000]); break;
            case 2: printf("%lld\n", dp[n[0]][n[1]]); break;
            case 3: // ???L1 == 0??? ?????if??
                if (n[1] == 0) printf("%lld\n", dp[n[0]][n[2]]);
                else printf("%lld\n", dp[n[0]][n[2]]-dp[n[0]][n[1]-1]);
                break;
        }
    }
}
