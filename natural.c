# include<stdio.h>

int main()
{
        long n;
	printf("please enter a number : ");
	scanf("%ld",&n);

	if(n>=1)
	{printf("this number is natural \n");
	}
	else if(n<0)
	{printf("this number is negative \n");
	}
	else
	{printf("your number is zero \n");
	}
}


