# include<stdio.h>
# include<math.h>
int main()
{

        int ans=0; 
	int count=0;
	int num;
	int orgnum;
	printf("enter a number : ");
	scanf("%d",&num);
	orgnum=num;

	while(num !=0)
	{num=num/10;
	 count=count+1;
	}
	num=orgnum;
 while(num!=0)
{
	int ses=0;
	ses=num%10;
	num=num/10;
	ans= ans + pow(ses,count);
}
if(orgnum==ans)
{printf("this is armstrong number \n");
}
else
{printf(" this is not a armstrong number \n");
}
}
