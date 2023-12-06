#include<stdio.h>
int main()
{
	float phy,chem,maths,p;
	printf("enter your physics marks : ");
	scanf("%f",&phy);
	printf("enter your chemistry marks : ");
	scanf("%f",&chem);
	printf("enter your maths marks : ");
        scanf("%f",&maths);

	p=(phy+chem+maths)*100/450;
	printf("you have got %.2f",p);
	printf("%%");

	
}


