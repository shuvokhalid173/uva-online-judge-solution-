#include <iostream>
#include <limits.h>
#include <cmath>

using namespace std;

const int N = 1000001;

unsigned long long nFactors[N];

void solution()
{
    int i, j, t;
    for (i = 0; i < N; ++i)
        nFactors[i] = 0;
    unsigned long long cum = 0;
    for (i = 2; i < N; ++i)
	{
        if (nFactors[i] == 0)
		{
            nFactors[i] = 1;

            if (i < INT_MAX / 2)
                for (j = 2 * i; j > 0 && j < N; j += i) {
                    t = j;
                    do
                        ++nFactors[j];
                    while ((t /= i) % i == 0);
                }
        }
        // accumulate
        nFactors[i] = (cum += nFactors[i]);
    }
}

// MAIN
int main() {
    // init
    solution();
    // solve
    int n;
    while (cin >> n)
        cout << nFactors[n] << endl;
    return 0;
}
