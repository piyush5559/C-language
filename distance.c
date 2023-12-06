#include<stdio.h>
#include<math.h>
int main()
{
	double km,mt,cm,inch,foot,mile;
	//input
input:
	printf("enter distance into km : ");
	scanf("%lf",&km);
	if(km<0)
	{
		printf("\x1b[31mNegative value not allowed.\x1b[0m\n");
		goto input;
	}
	//mathamatical steps
	mt=km*1000;
	cm=mt*100;
	inch=cm/2.54;
	foot=inch/12;
	mile=foot/5280;
	//printing
	printf("meter : %.2f\n",mt);
	printf("centi meter : %.2f\n",cm);
	printf("inch : %.2f\n",inch);
	if(round(foot)==1)//for round off value.
	{
		printf("foot : %.2f\n",foot);
	}
	else
	{
	printf("feet : %.2f\n",foot);
	}
	printf("mile : %.2f\n",mile);
}

