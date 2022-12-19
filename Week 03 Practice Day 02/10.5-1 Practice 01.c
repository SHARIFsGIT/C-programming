#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    int array[N];
    array[1]=0;
    array[2]=1;
    for (i=1; i<=N; i++)
    {
        array[i+2]=array[i]+array[i+1];
    }
    for (i=1; i<=N; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
