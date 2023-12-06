#include<stdio.h>
int main()
{
	char ch;
	printf("enter any charactor or symbol : ");
	scanf("%c",&ch);
	for(int i=0;i<=127;i++)
	{
		if(i>=65 && i<=90 && ch==i)
		{
			printf("this is uppercase\n");
		}
	        if(i>=97 && i<=122 && ch==i)
		{
			printf("this is lowercase\n");
		}
		if(i>=32 && i<=47 && i==ch||i>=58 && i<=64 && i==ch || i>=91 && i<=96 && i==ch || i>=123 && i<=126 && i==ch)
		{
			printf("this is symbol\n");

		}
		if(i>=48 && i<=57 && ch==i)
		{
			printf("thus is number\n");
		}
		
	}
}


				
	
