// Valera and Plates: Codeforces
#include<stdio.h>
int main()
{
    int n,m,k,i,w=0;
    scanf("%d %d %d",&n,&m,&k);
    int a[1005];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        if(a[i]==1 && m!=0)
            m--;
        else if(a[i]==2 && k!=0)
            k--;
        else if(a[i]==2 && k==0 && m!=0)
            m--;
        else if(a[i]==1 || a[i]==2 && (m==0 && k==0))
            w++;
    }
    printf("%d\n", w);
    return 0;
}
