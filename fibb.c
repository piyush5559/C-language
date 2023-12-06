#include<stdio.h>
int main()
{
	int n;
	long int c;
	int a=1;//first two numbers of
	int b=2;//fibbonachi

	printf("enter a number for fibonachi :");
	scanf("%d",&n);//for input 
	printf("%d\n",a);
        printf("%d\n",b);

	for(int i=1;i<=n;i++)//3rd number =1st +2nd
	{
		c=a+b;//printing variables in line 
		a=b;//try to understand😁
		b=c;	
		printf("%ld\n",c);
	
	}
}
