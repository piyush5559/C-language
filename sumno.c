# include<stdio.h>
int main()
{
	int n,a,sum;
	printf("enter any digit no : ");
	scanf("%d",&n);
	a=n;
	sum=0;
	int count=0;
	while(a!=0)
	{
		 
		sum=sum+(a%10);
		a=a/10;
		count++;

	}
	printf("the sum of %d numbers is  %d",count,sum);



	
}
