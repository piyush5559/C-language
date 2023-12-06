#include<stdio.h>
int main()
{
	int n;
	int fact=1;
	printf("enter a number for factorial : ");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("%d ! is %d",n,fact);
}
