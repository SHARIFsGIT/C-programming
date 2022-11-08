#include<stdio.h>

int main()
{
    int i, N, M;
    scanf("%d %d", &N, &M);

    if (N<M)
    {
        for (i=N; i<=M; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i=N; i<24; i++)
        {
            printf("%d ", i);
        }
        for(i=0; i<=M; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
