#include <stdio.h>
int main()
{
    int N, i, sum=0;
    scanf("%d", &N);
    int array[N];
    for (i=1; i<=N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i=1; i<=N; i++)
    {
        if(array[i]%2==1)
            sum = sum+array[i];
    }
    if (sum%2==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}

