// Bubble sort
#include <stdio.h>

int main()
{
    int N=8;
    int array[8]= {12, 9, 71, 44, 59, 1, 36, 69};

    int i, j, temp;

    for (j=0; j<N; j++)
    {
        for (i=0; i<(N-1); i++)
        {
            // Compare array[i] and array[i+1]
            if (array[i]>array[i+1])
            {
                temp= array[i];
                array[i]= array[i+1];
                array[i+1]= temp;
            }
        }
    }
    for (i=0; i<N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
