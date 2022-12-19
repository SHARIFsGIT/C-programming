#include<stdio.h>
// Review site
int main()
{
    int test_case, reviewer, vote, i, review;
    scanf("%d", &test_case);

    while(test_case--){
        vote = 0;
        scanf("%d", &reviewer);
        for(i=0; i<reviewer; i++){
            scanf("%d", &review);
            if(review == 1 || review == 3)
                vote++;
        }
        printf("%d\n", vote);
    }
}
