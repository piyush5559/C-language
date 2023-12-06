#include<stdio.h>
int main()
{
	int array[10];
	int even[10];
	int odd[10];
	int j=-1,k=-1;
	printf("enter 10 numbers : ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(array[i]%2==0)
		{
			j++;
			even[j]=array[i];
		}
		else
		{
			k++;
			odd[k]=array[i];
		}
	}

	printf("even numbers : ");
	for(int i=0;i<=j;i++)
	{
		printf("\t%d",even[i]);
	}

	printf("\n");
	printf("odd numbers : ");
	for(int i=0;i<=k;i++)
        {
                printf("\t%d",odd[i]);

        }
	printf("\n");
	
	

}
			

		

			
