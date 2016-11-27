#include <bits/stdc++.h>

using namespace std;

#define MAX 5000005
bool flag[MAX];
int store[MAX];

void sieve ()
{
	int i , j;
	int sq = (int) sqrt (MAX);
	for (i = 4; i <= MAX; i += 2)
	flag[i] = true;
	for (i = 3; i <= sq; i += 2){
		if (flag[i] == false){
			for (j = i * i; j <= MAX; j += i){
				flag[j] = true;
			}
		}
	}
	flag[1] = flag[0] = true;
	flag[2] = false;
}

int spf (int n)
{
	int i;
	int sq = (int) sqrt (n);
	int sum = 0;
	for (i = 2; i <= sq; i++){
		if (n % i == 0){
			while (n % i == 0){
				n /= i;
			}
			sum += i;
		}
	}
	if (n > 1)
	sum += n;
	return sum;
}
int main ()
{
	memset (flag , false , sizeof (flag));
	sieve ();
	int e;
	for (e = 2; e <= MAX; e++)
	store[e] = spf (e);
	int y;
	
	int c = 0 , a , b;
	cin >> a >> b;
	for (int r = a; r <= b; r++)
	{
		y = store[r];
		if (flag[y] == false){
			c++;
		}
	}
	cout << c << endl;
	main ();
}
 
