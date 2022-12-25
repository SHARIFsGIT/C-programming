#include <stdio.h>
#include <string.h>

int main()
{
    int m, i;
    scanf("%d", &m);

    char str[100], sen[100];
    for (i=0; i<m; i++)
    {
        scanf("%s", str);
        if (i==0)
        {
            strcpy(sen, str); // str copies to sen
        }
        else
        {
            strcat(strcat(sen, " "), str);
        }
    }
    puts(strcat(sen, " "));
    // puts(sen);

    return 0;
}

