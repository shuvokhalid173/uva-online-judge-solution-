

    #include <stdio.h>  
    #include <string.h>  
    #include <algorithm>  
    using namespace std;  
    int n;  
    int num[1005];  
    int ans;  
    int a, b, c, d;  
    int main()  
    {  
        while (scanf("%d", &n) != EOF && n)  
        {  
        int judge = 0;  
        for (int i = 0; i < n; i ++)  
            scanf("%d", &num[i]);  
        sort(num, num + n);  
        for (d = n - 1; d >= 0; d --)  
        {  
            for (a = n - 1; a > 1; a --)  
            {  
            if (a != d)  
                ans = num[d] - num[a];  
            for (b = 0, c = a - 1; b < c;)  
            {  
                if (num[b] + num[c] == ans)  
                {  
                judge = 1;  
                break;  
                }  
                else if (num[b] + num[c] < ans)  
                b ++;  
                else  
                c --;  
            }  
            if (judge)  
                break;  
            }  
            if (judge)  
            break;  
        }  
        if(judge)  
            printf("%d\n", num[d]);  
        else  
            printf("no solution\n");  
        }  
        return 0;  
    }
