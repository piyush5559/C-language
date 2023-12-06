#include<stdio.h>
int main()
{
	char string[500],f,d;//for store users sentance
	int i=0;//for while loop increment
	int pos[100];//for store position of characters
	int booln;//for input choice 0 and 1 
	int count=0;//for count same chars in string
	char replace;


/* string input */

	printf("\033[31m enter your string : \033[0m\n");

	while(1)    //always true
	{
		string[i]=getchar();  //accept one char without
				      //loop

		if(string[i]=='\n') //out when press
				    //new line(enter) 
		{
			break;
		}
		    i++;
	}


	
/*input char for search */
input:  //for goto stetment
	
	
          printf("\033[33m which char would you like to find :\033[0m");

          scanf("%c",&f);

          for(int j=0;j<=i;j++)
          {
	         if(string[j]==f)//to compare all char of string
				 //with entered char
	         {
		
		     pos[count]=j;  //for note positions of all
				   //entered char in given string
		     count++;

                 }
	  }



/* all for show positions */



	if(count==1)  //no repeatations of entered char
        {
	printf("characters position is %d",pos[0]+1);

	//it is zero base langueage so for perfect
	//positions we will add 1
	}
        

        else if(count>=2)  //if entered char reapeated
        {

	printf("characters positions are : \n");

	     for(int p=0;p<count;p++)
	     {
		printf("%d\t",pos[p]+1);
	     }
        }

        else if(count==0)  //if the char is not in string
        {
	       printf("give a valid input 🙄");
goto input;
	}
        

              printf("\n");


/*for other option*/

printf("\033[34m do you want to replace(0) or delete(1) any char : \033[0m");
scanf("%d",&booln);



/* for delete character */

   if(booln==1)
   {
	printf("\033[35m which char do you want to delete : \033[0m");

     //this getchar() is catch the \n of the enter that we press
     //for give char
	
	getchar();

	//this getchar() is for input char from user
	
	d=getchar();

/*process of delete and shift*/

	int x,y;
	for( x=0,y=0;x<i;x++)
	{
		if(string[x]!=d)  //point characters that does
				  //not need to delete and
				  //collect it
		{
			string[y]=string[x];  //delete and shift the char
			y++;
		}
		
	}
	i=y;  //after delete reset the length of string
	string[y]='\0';  //eliminate last reapeated char
	

	printf("edited string is : \n");
        
/* print string after delete characters */

	for(int z=0;z<i;z++)
	{
	printf("%c",string[z]);

	}
	printf("\n");
	
     }
/* for replace the char */

if(booln==0)
{
	printf("\033[36m which char do you what to switch :\033[0m ");
	getchar();  //same as above for catch \n (next line)
	scanf("%c",&d);  //for input 

	printf("\033[33m with which character : \033[0m");
	getchar();  // same as above to catch input buffer of next line
	scanf("%c",&replace);  //for input

	for(int j=0;j<i;j++)  
	{
	
	          if(string[j]==d)   //point all char that we want to switch
	          {
		      string[j]=replace;   //switch it
	          }
	}
/* output after switching */

	      printf("new string is :\n ");
	
		  for(int o=0;o<i;o++)
		  {
			  printf("%c",string[o]);
		  }
		  printf("\n");
}

}  //end😊




