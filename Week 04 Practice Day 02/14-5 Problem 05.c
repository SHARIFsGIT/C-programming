// Petya and strings: Codeforces
// Texicographically sort
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str1[500];
    char str2[500];
    int i, flag= 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    for (i=0; i<strlen(str1)-1; i++)
    {
        if (str1[i]>='A' && str1[i]<='Z')
            str1[i]+=32;
        if (str2[i]>='A' && str2[i]<='Z')
            str2[i]+=32;
    }

    for (i=0; i<strlen(str1)-1; i++)
    {
        if (str1[i]<str2[i])
        {
            flag= 1;
            printf("-1\n");
            break; // or return 0;
        }
        else if (str1[i]>str2[i])
        {
            flag= 1;
            printf("1\n");
            break; // or return 0;
        }
    }
    // printf("0");
    if(flag==0)
        printf("0");
    return 0;
}

