#include <stdio.h>
int main()
{
    int N, i, j, flag, t, count=0;
    scanf("%d ", &N);
    int arr[N], prime[100];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N; i++)
    {
        flag = 0;
        for (j = 2; j <= arr[i]/2; j++)
        {
            if(arr[i]%j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            prime[t]=arr[i];
            t++;
            count++;
        }
    }
    printf("%d\n", count);
    for(i=0; i<t; i++)
     {
         printf("%d ", prime[i]);
     }
     return 0;
}

