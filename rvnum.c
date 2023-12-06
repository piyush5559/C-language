#include<stdio.h>
void rvnum(int array[],int n);
int main()
{
	int array[20],n;
	int i=0;
	printf("enter a number for reverse ; ");
	while(array[i]=='\n')
	{
	scanf("%d",&array[i]);
	i++;
	}
	n=i;
	rvnum(array,n);
	printf("Reversed numbers: ");
	for(int j=0;j<n;j++)
	{
		printf("%d",array[j]);
	}

}
void rvnum(int array[],int n)
{
	int fn,sn;
	for(int i=0;i<n/2;i++)
	{
		fn=array[i];
		sn=array[n-i-1];
		array[i]=sn;
		array[n-i-1]=fn;
	}
}

	


