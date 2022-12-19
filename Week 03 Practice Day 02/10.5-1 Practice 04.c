#include <stdio.h>
int main()
{
    int N, i, j, temp, k;
    scanf("%d", &N);
    int array[N];
    for (i=1; i<=N; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &k);
    for (i=1; i<=N; i++)
    {
        for (j=i+1; j<=N; j++)
        {
            if(array[i]>array[j])
                {
                    temp= array[i];
                    array[i]= array[j];
                    array[j]= temp;
                }
        }
    }
    for (i=1; i<=N; i++)
    {
        if(i==k)
            printf("%d", array[i]);
    }
    return 0;
}
