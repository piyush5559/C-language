#include<stdio.h>

int main()
{
	
	int n;
	long int sum=0;
	printf("enter n to print 1\u00B2 to n\u00B2 addition : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	
		sum=sum+(i*i);
	}
	printf("the addition of 1\u00B2 to %d\u00B2 is :%ld\n ",n,sum);
}

