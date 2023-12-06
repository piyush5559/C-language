#include<stdio.h>
int main()
{
	long int n;
	printf("plz enter any number : ");
	scanf("%ld",&n);
	if(n<0)
	{
		printf("the number is negative\n");
	}
	else if(n>0)
	{
		printf("the number is positive\n");
	}
	else
	{
		printf("this is zero\n");
	}
}
