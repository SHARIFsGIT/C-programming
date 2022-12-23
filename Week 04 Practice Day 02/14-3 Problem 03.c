// Beautiful matrix: Codeforces
// Manhattan distance (X1,Y1): Go X1 first then go Y1
// Euclidean distance (X1,Y1): লব্ধির দিক
#include <stdio.h>

int main()
{
    int i, j, x, y, row_change, col_change, ans;
    int array[5][5];

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            scanf("%d", &array[i][j]);

            if (array[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }

    if(x>2)
        row_change= (x-2);
    else
        row_change= (2-x);

    if(y>2)
        col_change= (y-2);
    else
        col_change= (2-y);

    ans= row_change+col_change;
    printf("%d\n", ans);

    return 0;
}

