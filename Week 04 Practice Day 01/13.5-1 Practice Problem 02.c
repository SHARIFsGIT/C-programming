#include <stdio.h>

int main(){
   int i, len=0, flag=0;
   char w[100], rev[100];
   scanf("%s", w);

   for(i=0; w[i] != '\0'; i++)
      len++;

   for(i=len; i>=0; i--)
   {
      if (w[i] != '\0')
         rev[len-i] = w[i];
   }

   for(i=1; i<=len; i++)
   {
      if(w[i-1] != rev[i])
         flag=1;
         break;
   }

   if(flag==1)
      printf("NO");
   else
      printf("YES");

   return 0;
}
