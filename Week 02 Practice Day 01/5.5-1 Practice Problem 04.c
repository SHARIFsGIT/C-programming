#include<stdio.h>

int main()
{
    int i, N, M;
    scanf("%d %d", &N, &M);

    for(i=1; i<=N; i++)
    {
        if (i%M==0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
