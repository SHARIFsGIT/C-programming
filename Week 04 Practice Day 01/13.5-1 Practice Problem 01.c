#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s", s);

    int i=0, LE= 26, len=strlen(s), total=0;
    int freq[LE+1];

    for(i=0; i<=LE; i++)
    {
       freq[i] = 0;
    }

    for(i=0; i<len; i++)
    {
       freq[(s[i] - 'a') + 1]++; // char to ascii convert+freq array increment(how many b?)
    }

    for(i=0; i<=LE; i++)
    {
       if(freq[i] >= 1)
         total++;
    }

    for(int next=0; next!=total; next++)
    {
        int max= -1, index=-1;
        char ch;
        for(i=1; i<=LE; i++)
        {
         if(freq[i] > max)
         {
            max = freq[i];
            ch = i + 96;
            index = i;
         }
        }
      for(i=1; i<=max; i++)
      {
         printf("%c", ch);
      }
      freq[index] = 0;
    }
    return 0;
}
