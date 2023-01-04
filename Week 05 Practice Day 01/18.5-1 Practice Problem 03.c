// Problem 03
#include <stdio.h>
int main()
{
    int N, i, sum=0;
    scanf("%d", &N);
    int arr[N];
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<N; i++)
    {
        sum += arr[i] % 10;
    }
    printf("Sum = %d", sum);
    return 0;
}
