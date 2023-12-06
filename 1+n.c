#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("enter n for 1-n sum : ");
	scanf("%d",&n);
	sum(n);
}
int sum(int n)
{
	int total=0;
	for(int i=0;i<=n;i++)
	{
		total=total+i;
	}
	printf("\n");
	printf("sum is %d\n",total);
	return 0;
	
}
