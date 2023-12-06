#include<stdio.h>
#include<termios.h>
#include<unistd.h>
void reverse(char str[],int n,int k);//function for reverse string
int main()
{
	char str[20],c;//array for store word
	int n=0;//variable for while loop
		
		
	//input process
	printf("enter a single word  : \n");


	
        while(1)//infinite while loop
	{
		c=getchar();//for input a single char
	if(c=='\n' || c==(char)EOF)//EOF mean end of file
	{
		break;
	}
	
	str[n]=c;
	n++;
	}

	for(int k=0;k<n/2;k++)//loop for reverse process
	{
          reverse(str,n,k);//calling function

}
        for (int j = 0; j < n; j++)//printing output
        {
        printf("%c", str[j]);
        }

}//end of main function
void reverse(char str[],int n,int k)//define reverse function
{
	char first=str[k];
	char sec=str[n-k-1];
	str[k]=sec;
	str[n-k-1]=first;

}




