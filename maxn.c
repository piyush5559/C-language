#include<stdio.h>
int maxnum(int *num1, int *num2)
{
	if(*num1>*num2)
	{
		return *num1;
	}
	else
	{
		return *num2;
	}
}
int main()
{
	int a;
	int b;
	printf("enter your first number : ");
	scanf("%d",&a);
	printf("enter your second number : ");
	scanf("%d",&b);
	int max=maxnum(&a,&b);
	
	printf("%d is big number",max);
}
