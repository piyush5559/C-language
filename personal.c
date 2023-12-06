#include<stdio.h>
int main()
{
	struct person 
	{
		char name[10];
		char doj[20];
		int salary;
	};

	struct person p[5];
	for(int i=0;i<5;i++)
	{
		printf("enter name of person %d : ",i+1);
		
		scanf("%s",p[i].name);
		printf("enter date of joining  of person %d : ",i);
		scanf("%s",p[i].doj);
		printf("enter salary of person %d : ",i);
		scanf("%d",&p[i].salary);
	}

	for(int j=0;j<5;j++)
	{
		printf("person %d :\n",j+1);
		printf("\n");
		printf("name : %s\n",p[j].name);
		printf("date of joining  : %s\n",p[j].doj);
		printf("salary : %d\n",p[j].salary);
		printf("\n");
	}
}



		 
