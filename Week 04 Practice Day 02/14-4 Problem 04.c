// String task: Codeforces
#include <stdio.h>

int main()
{
    int i;
    char str[500];
    fgets(str, sizeof(str), stdin);

    for (i=0; i<strlen(str)-1; i++)
    {
        if (str[i]>='A' && str[i]<= 'Z')
        {
            str[i]+=32; // makes small letter
        }
        if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'))
        {
            printf(".%c", str[i]);
        }
    }

    return 0;
}

