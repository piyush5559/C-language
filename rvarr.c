#include<stdio.h>
void reverce(int arr[],int n);
int main()
{
	int n;
	printf("enter arrays size : ");
	scanf("%d",&n);
	int arr[n]; // Declare an array of size n
    printf("Enter numbers of an array :\n ");
    //loop for input

    for (int i = 0; i < n; i++) {
	printf("\t");    
        scanf("%d", &arr[i]);
    }
    reverce(arr,n);
    //loop for print ans.
    for(int i=0;i<n;i++)
    {
	    printf("%d\t",arr[i]);
    }

}
//function for reverce an array.
void  reverce(int arr[],int n)
{
	int firstval;
	int secval;
	for(int i=0;i<n/2;i++)
	{
		firstval=arr[i];
		secval=arr[n-i-1];
		arr[i]=secval;
		arr[n-i-1]=firstval;
	
	}
	
}


	
