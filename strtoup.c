#include<stdio.h>
int main()
{
	char str[50];//define a array of string
        int n=0;//variable for while loop
	
	//input process.
	printf("enter a word : ");
	while(1)//infinite loop
	{
		str[n]=getchar();
	if(str[n]=='\n' || str[n]==(char)EOF)//end of file return
					     //int value
        {
		break;
	}
	n++;
        }
	for(int i=0;str[i];i++)//loop for full word .
			       //loop will stop when null
			       //character apear.
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;//65-90 = A-Z
					 //97-122 = a-z 
					 //97-65=32(diff bitween
					 //         'a' and 'A')
		}
	}
	printf("\n");//printing capital lateers
	for(int j=0;j<=n;j++)
	{
		printf("%c",str[j]);
	}
}

       	
