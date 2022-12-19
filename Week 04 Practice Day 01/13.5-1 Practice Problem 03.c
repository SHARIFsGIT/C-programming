#include <stdio.h>

int main()
{
   int i=0, vc=0, cc=0;
   char s[100];
   printf("Enter a word : ");
   scanf("%s", s);

   for(i=0; s[i]!= '\0'; i++)
   {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
         vc++;
      else
         cc++;
   }
   printf("Vowel - %d\nConsonant - %d", vc, cc);
   return 0;
}
