#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 2 numbers : ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("addision : %d\n",c);
	c=a-b;
	printf("substraction : %d\n",c);
	c=a*b;
	printf("multiplication : %d\n",c);
	if(b==0)
	{
		printf("\x1b[31mdivision : eror!\x1b[31m\n");
	}
	else
	{
		float div;
		div=(float)a/(float)b;
	printf("division : %.2f\n",div);
	}
}



