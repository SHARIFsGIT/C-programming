// Difference Operations: Codeforces
#include<stdio.h>
int main()
{
    int t, n, a[1000], i;
    scanf("%d", &t);
    while(t--)
    {
        int sum=0;
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]%a[0]==0)
                sum++;
        }
        if(sum==n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
