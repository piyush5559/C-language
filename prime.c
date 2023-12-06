# include<stdio.h>

int main()
{

	int n;
	int j=0;
	printf("enter a single number : ");
	scanf("%d",&n);

        for(int i=0;i<=n;i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}
		if(j>2)
		{
			printf("this is not a prime number\n ");
		}
		else
		{
			printf("this is prime number\n ");
		}
}



	

