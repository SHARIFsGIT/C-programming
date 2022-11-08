#include<stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
/*
    for(i=2; i<=N ; i+=2)
        {
            printf("%d ", i);
        }
*/

for (i=1; i<=N; i++)
{
    if(i%2==0)
    {
        printf("%d ", i);
    }
}
    return 0;
}
