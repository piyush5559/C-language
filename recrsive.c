#include<stdio.h>
int sumn(int x);
int main()
{
	int a,sum;
	printf("enter the number : ");
	scanf("%d",&a);
	sum=sumn(a);
	printf("the sum is : %d",sum);
}
int sumn(int x)
{
	int b;

	if(x==0)
	{
		return(0);
	}
	else
	{
		b=x+sumn(x-1);
		return(b);
	}
}

