// Equal Candies: Codeforces

#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);

	for(int i=0; i<t; i++)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int j=0; j<n; j++)
		{
		    scanf("%d", &a[j]);
        }
		int sum=0;
		int min=a[0];
		for(int j=0; j<n; j++)
		{
			sum=sum+a[j];
			if(a[j]<min)
			{
			    min=a[j];
			}
		}
		printf("%d\n", sum-(n*min));
	}
return 0;
}
