// Cypher: Codeforces
#include <stdio.h>
int main()
{
    int test_case, initial_total_number, initial_position[105], number_of_move;
    char str[100];

    scanf("%d", &test_case);
    for(int k=0; k<test_case; k++)
    {
        scanf("%d", &initial_total_number);
        for(int i=0; i<initial_total_number; i++)
        {
            scanf("%d", &initial_position[i]);
        }

        for(int i=0; i<initial_total_number; i++)
        {
            scanf("%d", &number_of_move);
            scanf("%s", str);

            for(int j=0; j<number_of_move; j++)
            {
                if(str[j] == 'D' && initial_position[i] == 9)
                {
                    initial_position[i] = 0;
                }
                else if(str[j] == 'U' && initial_position[i] == 0)
                {
                    initial_position[i] = 9;
                }
                else if(str[j] == 'D')
                {
                    initial_position[i] +=1;
                }
                else if(str[j] == 'U')
                {
                    initial_position[i] -=1;
                }
            }
        }

        for(int i=0; i<initial_total_number; i++)
            printf("%d\n", initial_position[i]);
    }
    return 0;
}
