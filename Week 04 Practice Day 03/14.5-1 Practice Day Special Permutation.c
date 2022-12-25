// Special Permutation: Codeforces
#include <stdio.h>
int main()
{
    int test_case, total_index, arr[105];

    scanf("%d", &test_case);
    for(int j=0; j<test_case; j++)
    {
        scanf("%d", &total_index);
        for(int i=0; i<total_index-1; i++)
        {
            arr[i] = 2+i;
        }
        arr[total_index-1] = 1; // by deafult set
        for(int i=0; i<total_index; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
