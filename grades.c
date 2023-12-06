# include<stdio.h>
int main()
{int marks;
	printf("please enter your marks(0-100) : ");
	scanf("%d",&marks);

	if (marks<30)
	{
		printf("your grade is C \n");
	}
	if(marks>=30 && marks<70)
	{
		printf("your grade is B \n");
	}

	if(marks>=70 && marks<90)
	{
		printf("your grade is A \n");
	}
	if(marks>=90 && marks<=100)
	{
		printf("your grade is A+ \n");
	}
	if(marks>100)
	{
		printf("dont make me laugh🤣 \n");
	}



}
