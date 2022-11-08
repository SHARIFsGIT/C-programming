#include <stdio.h>

int main()
{
    int N, i, Q, j, index, value;
    printf("Array size: ");
    scanf("%d", &N);

    int array[N];

    printf("Array value: ");
    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Queries: ");
    scanf("%d", &Q);

    for (j=0; j<Q; j++)
    {
        scanf("%d %d", &index, &value);
        array[index]=array[index]+value;
    }

    for (i=0; i<N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
