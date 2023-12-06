#include<stdio.h>
float temp(float n);
int main()
{
	float C,F;
	printf("enter tempreture in C° : ");
	scanf("%f",&C);
	F=temp(C);
	printf("the tempreture in F is %.2f",F);
}
float temp(float n)
{
	float F;
        F=(1.8*n)+32;
	return F;
}


