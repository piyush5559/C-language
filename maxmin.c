#include<stdio.h>
int main()
{
	int array[10];
	int min,max;
	 max=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
		if(i==0)
		{
			min=array[0];
		}
		
		if(max<array[i])
		{
			max=array[i];
		}

		else
		{
			max=max;
		}
		if(min>array[i])
		{
			min=array[i];
		}
		else
		{
			min=min;
		}
	}
	printf("max value is : %d\n",max);
	printf("min value is : %d\n",min);
}



