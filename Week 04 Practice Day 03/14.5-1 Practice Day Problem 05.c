#include<stdio.h>
int main()
{
    int r=8,c=8;
    int chess[r][c];
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            chess[i][j]=0;
        }
    }

    int n;
    scanf("%d", &n);

    while(n--) // at 0 loop becomes false
    {
        int row, col;
        scanf("%d %d", &row, &col);
        chess[row][col]=1;
    }

    for(int i=1; i<=r; i++)
    {
        int count=0, j;
        for(int j=1; j<=c; j++)
        {
            if(chess[i][j]==1)
                count++;
        }
        if(count>1)
        {
            for(int j=1; j<=c; j++)
            {
                chess[i][j]=0;
            }
        }
    }

    for(int j=1;j<=c; j++)
    {
        int col_count = 0;
        for(int i=1; i<=r; i++)
        {
            if(chess[j][i]==1)
            {
                col_count++;
            }
        }
        if(col_count >1)
        {
            for(int i=1; i<=r; i++)
            {
                chess[j][i]=0;
            }
        }
    }
    printf("\n");

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(chess[i][j]!=0)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}
