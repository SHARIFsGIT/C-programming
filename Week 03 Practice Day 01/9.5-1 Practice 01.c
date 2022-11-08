#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);

    int array[N];

    for (i=1; i<=N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=N; i>0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
