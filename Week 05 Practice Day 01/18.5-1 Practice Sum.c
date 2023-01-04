// Sum: Codeforces
#include <stdio.h>
int main()
{
    int test_case, num1, num2, num3;
    scanf("%d", &test_case);
    while(test_case--)
    {
        scanf("%d %d %d", &num1, &num2, &num3);
        if(num1+num2==num3 || num1+num3==num2 || num2+num3==num1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
