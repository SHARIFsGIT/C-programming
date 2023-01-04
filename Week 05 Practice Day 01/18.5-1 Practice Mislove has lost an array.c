// Mislove has lost an array: Codeforces
#include<stdio.h>
int main()
{
    int n,l,r,t,i,sum;
    scanf("%d %d %d",&n,&l,&r);
    // Finding minimum
    t=1;
    sum=0;
    for(i=0; i<n; i++)
    {
        sum=sum+t;
        if(i>=n-l)
            t=t*2;
    }
    printf("%d ",sum);
    // Finding maximum
    sum=0;
    t=1;
    for(i=0; i<n; i++)
    {
        sum=sum+t;
        if(i<r-1)
            t=t*2;
    }
    printf("%d ",sum);
}
