#include <stdio.h>

int main(){
   int N, M, i, j;
   printf("Row = ");
   scanf("%d", &N);
   printf("Col = ");
   scanf("%d", &M);
   int a[N][M], b[N][M];

   printf("Enter %dx%d matrix A \n", N, M);
   for(i=0; i<N; i++){
      for(j=0; j<M; j++){
         scanf("%d", &a[i][j]);
      }
   }
   printf("Enter %dx%d matrix B \n", N, M);
   for(i=0; i<N; i++){
      for(j=0; j<M; j++){
         scanf("%d", &b[i][j]);
      }
   }

   printf("Output : \n");
   for(i=0; i<N; i++){
      for(j=0; j<M; j++){
         printf("%d ", a[i][j] + b[i][j]);
      }
      printf("\n");
   }
   return 0;
}
