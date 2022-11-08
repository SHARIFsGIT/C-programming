#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(0<= a && a%2!=0)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
