// Selection sort
#include <stdio.h>

int main()
{
    int N=8;
    int array[8]= {12, 9, 71, 44, 59, 1, 36, 69};
    int i, j, min= array[0], min_index=0, sorted_array[N];

    for (j=0; j<N; j++)
    {
        min= array[0];
        min_index=0;
        for (i=0; i<N; i++)
        {
            if (array[i]<min)
            {
                min= array[i];
                min_index= i;
            }
        }
        sorted_array[j]= min;
        array[min_index]= 9999;
    }

    for (i=0; i<N; i++)
    {
        printf("%d ", sorted_array[i]);
    }

    return 0;
}
