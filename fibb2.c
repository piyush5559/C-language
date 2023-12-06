#include<stdio.h>
int main()
{
	int n;
	printf("enter a limit for ascci value : ");
	scanf("%d",&n);
	int asci[n];
	asci[0]=0;
	asci[1]=1;
	asci[2]=2;
	
	if(n<0)
	{
		printf("please enter positive number :");
	}

	for(int i=3;i<=n;i++)
	{

		asci[i]=asci[i-2]+asci[i-1];

	}
        for(int i=0;i<=n;i++)
	{
	printf("%d\t",asci[i]);
	}
	printf("\n");
	
}

