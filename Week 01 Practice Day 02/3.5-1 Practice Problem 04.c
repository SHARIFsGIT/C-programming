#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a<0 || 100<a)
    {
        printf("Wrong entry");
    }
    else if(80<=a)
    {
        printf("A+");
    }
    else if(70<=a && 79>=a)
    {
        printf("A");
    }
    else if(60<=a && 69>=a)
    {
        printf("A-");
    }
    else if(50<=a && 59>=a)
    {
        printf("B");
    }
    else if(40<=a && 49>=a)
    {
        printf("C");
    }
    else if(33<=a && 39>=a)
    {
        printf("D");
    }
    else if (0<=a && 32>=a)
    {
        printf("F");
    }
    return 0;
}
