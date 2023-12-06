#include<stdio.h>
int main()
{
	int n,sum;
	float avg;
	sum=0;
        printf("how many number you want to enter : ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	avg=(float)sum/(float)n;
	printf("sum of %d is %d \n",n,sum);
	printf("avg of %d is %.2f \n",n,avg);
}






