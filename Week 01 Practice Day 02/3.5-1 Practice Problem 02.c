#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(b>a && b>c)
    {
        printf("B is bigger");
    }
    else if(a>b && a>c)
    {
        printf("A is bigger");
    }
    else if(c>a && c>b)
    {
        printf("C is bigger");
    }
    else if(a<b && a<c && b==c)
    {
        printf("B and C both are bigger");
    }
    else if(b<a && b<c && a==c)
    {
        printf("A and C both are bigger");
    }
    else if(c<b && c<b && b==a)
    {
        printf("A and B both are bigger");
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}
