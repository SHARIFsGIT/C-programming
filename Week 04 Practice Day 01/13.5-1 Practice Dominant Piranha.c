#include<stdio.h>
// Dominant piranha
int main(){
    int test_case, indexes, max;
    scanf("%d", &test_case);

    for(int i=0; i<test_case; i++){
        scanf("%d", &indexes);
        int a[indexes];

        for(int j=0; j<indexes; j++){
            scanf("%d", &a[j]);
            if(j==0)
                max=a[0];
            else{
                    if(a[j]>max)
                    max=a[j];
            }
        }
        int flag=0, l;
        for (int j=0; j<indexes; j++){
            if(j==0 && a[j]==max && a[j]>a[j+1]){
                flag=1;
                l=1;
                break;
            }
            else if(j==indexes-1 && a[indexes-1]==max && a[indexes-1]>a[indexes-2]){
                flag=1;
                l=indexes;
                break;
            }
            else if(j!=0 && j!=indexes-1){
                 if(a[j]==max && (a[j]>a[j+1] || a[j]>a[j-1])){
                    flag=1;
                    l=j+1;
                    break;
                }
             }
        }
        if(flag==1)
            printf("%d\n", l);
        else if(flag==0)
            printf("-1\n");
    }
    return 0;
}
