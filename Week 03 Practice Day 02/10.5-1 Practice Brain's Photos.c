// Brain's Photos: Codeforces

#include<stdio.h>
int main()
{
    int a, b, flag=0, i;
    char color;

    scanf("%d%d" , &a, &b);

    for(i=0; i<a*b*2; i++)
    {
        scanf("%c", &color);
        if(color=='C' || color=='M' || color=='Y')
            flag =1;
    }

    if(flag)
    printf("#Color");

    else
    printf("#Black&White");

    return 0;
}
