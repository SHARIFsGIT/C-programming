#include <stdio.h>

int main()
{
    int N, i, target, out=0;

    printf("Size of the array: ");
    scanf("%d", &N);

    int array[N];

    printf("Elements of the array: ");
    for (i=1; i<=N; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("What is your target number: ");
    scanf("%d", &target);

    for (i=1; i<=N-1; i++)
    {
        if ((array[i]+array[i+1])==target)
        {
            out = 1;
            break;
        }
    }

    if(out==0)
        printf("NO");
    else
        printf("YES");

    return 0;
}
