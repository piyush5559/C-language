#include <stdio.h>

 

int main() {

    
    int n;
    printf("how many number you like to enter : ");
    scanf("%d",&n);
    int array[n];
    printf("enter %d number for ascending order :\n ",n);

    for(int i=0;i<n;i++)

    {
	    scanf("%d",&array[i]);

    }

    for(int i=0;i<n;i++)

    {

        for(int j=i;j<n;j++)

        {

            if(array[i]>array[j])

            {
               int temp=array[i];
	           array[i]=array[j];
		   array[j]=temp;

            }

        }
    }
        printf("ascending order :\n ");

        for(int p=0;p<n;p++)

        {

            printf("%d\n",array[p]);

        }

   
}
