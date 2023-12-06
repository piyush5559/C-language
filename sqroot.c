#include<stdio.h>        //by using pow function
#include<math.h>
int main()
{
	float no,sqrt;
	printf("enter a number to find sqrt ; ");
	scanf("%f",&no);
	sqrt=pow(no,0.5);//i shoud not use 1/2 becouse this pow function see it as int
	printf("%f numbers sqrt is %.2f\n",no,sqrt);
}
