#include<stdio.h>

int main()
{
    int mat1[100][100], mat2[100][100], mulMat[100][100];
    int row, column, value, i, j, k;

    scanf("%d %d", &row, &column);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=column; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=column; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(k=1; k<=row; k++)
    {
        for(i=1; i<=row; i++)
        {
            value =0;
            for(j=1; j<=column; j++)
            {
                value = value + (mat1[k][j] * mat2[j][i]);
            }
            mulMat[k][i] = value;
        }
    }

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=column; j++)
        {
            printf("%d ",mulMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
