#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i;
	srand(time(NULL));
	n=rand()%100;
	while(n!=i)
	{
		printf("guss the number(1-100): ");
		scanf("%d",&i);
		if(i>n)
		{printf("your number is big\n");
		}
		else if(i<n)
		{printf("your number is small\n");
		}
		else if(i==n)
		{printf("you are correct\n");
		}
		}

}

