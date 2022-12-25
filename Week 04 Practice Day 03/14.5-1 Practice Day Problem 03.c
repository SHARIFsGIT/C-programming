#include<stdio.h>

int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str)-1, sum=0, i;

    for(i=0; i<len; i++)
    {
        sum+= str[i]-96;
    }

    for(i=0; i<=len; i++)
    {
        if(pow(2, i)==sum)
        {
            printf("Yes\nconst = 2^%d", i);
            return 0;
        }
        else if(pow(2, i)>sum)
        {
            printf("NO\n");
            return 0;
        }
    }

    return 0;
}
