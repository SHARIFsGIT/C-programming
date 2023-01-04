// Problem 04
#include <stdio.h>
int main()
{
    int i;
    char str[100], cha;
    scanf("%s", &str);
    for(i=0; str[i]!= '\0'; i++)
    {
        if(str[i] != cha)
        {
            printf("%c", str[i]);
            cha = str[i];
        }
    }
    return 0;
}
