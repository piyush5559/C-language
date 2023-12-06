#include<stdio.h>
int main()
{
        int n;
        float sum=0;//declaration of variabkes
        printf("enter n for sum of 1/1 to 1/n : ");
        scanf("%d",&n);//input statment
        for(int i=1;i<=n;i++)//loop for add 1 to 1/n
        {
                sum=sum+(float)1/(float)i;//adding 1 by 1 values
        }
        printf("sum is %.3f\n",sum);//display sum
}
