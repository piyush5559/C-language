#include<stdio.h>
int swap(int x,int y);
int main()
{
	int a,b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	swap(a,b);
}
int swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("a : %d and b : %d",x,y);
	return 0;
}

