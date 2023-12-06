#include<stdio.h>
void upper(char str[],int i);
int main()
{
	char str[100];
	int i=0;
	printf("enter string : ");
	while(1)
	{
		
		str[i]=getchar();
		if(str[i]=='\n')
		{
			break;
		}
		i++;
	}
	upper(str,i);
	for(int k=0;k<i;k++)
	{
		printf("%c",str[k]);

	}
	printf("\n");
}
void upper(char str[],int i)
{
	int k=0;
	for(int j=0;j<i;j++)
	{
		if(str[j]>='a'&& str[j]<='z')
		{
			str[j]=str[j]-'a'+'A';
		}
	}

}


