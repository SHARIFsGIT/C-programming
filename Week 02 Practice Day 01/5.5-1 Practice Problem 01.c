#include <stdio.h>

int main()
{
    int N; //i;
    scanf("%d", &N);
/*
    for(i=1; i<=N; i++)
    {
        printf("%d ",i);
    }
*/
int i=1;
while (i<=N)
{
    printf("%d ", i);
    i++;
}
    return 0;
}