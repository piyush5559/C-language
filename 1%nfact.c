#include<stdio.h>
int main()
{
	int n,mp=1;
	float sum=0;
	printf("enter a number for sum 1 to 1/n! : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			mp=mp*j;
			sum=sum+(float)1/(float)mp;
		}
	}
	printf("sum is %.3f\n ",sum);
}

