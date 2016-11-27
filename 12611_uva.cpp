#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int test;
    scanf ("%d" , &test);
    int i;
    for (i = 1; i <= test; i++){
        double r;
        scanf ("%lf" , &r);
        double l = r * 5.0;
        double w = (6.0 * l) / 10.0;
        double hw = w / 2.0;
        double lr = (45.0 / 100.0) * l;
        double lf = (55.0 / 100.0) * l;
        printf ("Case %d:\n" , i);
        printf ("-%.0lf %.0lf\n" , lr , hw);
        printf ("%.0lf %.0lf\n" , lf , hw);
        printf ("%.0lf -%.0lf\n" , lf , hw);
        printf ("-%.0lf -%.0lf\n" , lr , hw);
    }
}
