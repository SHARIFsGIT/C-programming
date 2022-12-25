#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int i=0, flag=0;

    for(i=0; s[i]!='\0'; i++)
    {
        if(!(s[i] == '0' || s[i]== '1'))
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
