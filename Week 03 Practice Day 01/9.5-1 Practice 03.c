#include <stdio.h>

int main()
{
    int N, i, out=1;

    printf("Size of the array: ");
    scanf("%d", &N);

    int array[N];
    printf("Value of the array: ");

    for (i=1; i<=N; i++)
    {
        scanf("%d", &array[i]);
    }

    int item1= array[1];

    for (i=1; i<=N; i++)
    {
        if (item1!=array[i])
        {
            out = 0;
        }
    }
    if (out)
        printf("YES");
    else
        printf("NO");

    return 0;
}

