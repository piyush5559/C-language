#include<stdio.h>
//global variables.
char value[3][3];//for value 'O' and 'X'
int count;//count avalable blank spaces

//function for print bord 
void printbord()
{
	printf(" %c | %c | %c\n", value[0][0], value[0][1], value[0][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c\n", value[1][0], value[1][1], value[1][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c\n", value[2][0], value[2][1], value[2][2]);


}

//function for gameover (end of game)
int end()
{
	 count=0;
	for(int i=0;i<3;i++)
	{
	//condisions for win by row and col.
	if((value[i][0]==value[i][1] && value[i][1]==value[i][2] && value[i][1]!=' ') ||           (value[0][i]==value[1][i] && value[1][i]==value[2][i] && value[1][i]!=' '))
                
         {
			return 1;//win
		
	 
	 }

	}
	//condision for win by diagonaly
	if((value[0][0]==value[1][1] && value[1][1]==value[2][2] && value[0][0]!=' ') ||
           (value[0][2]==value[1][1] && value[1][1]==value[2][0] && value[1][1]!=' ')) 

	{
             return 1; // Win
        }
	//for count avalable blocks (spaces).
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(value[i][j]==' ')
			{
				count++;
			}
		}
	}

	

		
			return -1;
		
	
}


int main()
{       int x=-1;
	int result=-1;
	int y=-1;
	char cp='O'; //initialize the current player with O 
	char pl1[10];//name for player 1.
	char pl2[10];//name for player 2.

    for (int i = 0; i < 3; i++)  //for initialize whole array with blank space. 
    {
        for (int j = 0; j < 3; j++) 
	{
            value[i][j] = ' ';
        }                    
    }


	printf(" welcome ! \n");  //starting

        printbord();   //for printing bord

	printf("enter first players name : ");
	scanf("%9s",pl1);
	printf("enter second players name : ");
        scanf("%9s",pl2);

while(result!=1)   //while any player will not win the game.
{
printf(" %s's(%c) tern enter row and colm (0-2) : ",(cp=='O'?pl1:pl2),cp); //first check the current player
scanf("%d %d",&x,&y);
if( value[x][y]==' ' && x>=0 && x<3 && y>=0 && y<3) //conditions for unwanted entery by user.
{

value[x][y]=(cp=='O' ? 'O' : 'X');  //print the O or X where user wants.
printbord();  //show the updated bord.
result=end();  //check if any player 1 win.
               if(result==1)
                {
	
	printf("\033[0;32m %s wins !\033[0;0m\n",cp=='O'?pl1:pl2);
	break;

                }
	        if(count==0)  //check all block are full or not.if all full then break
	       {
		       printf("this is draw !\n");
			       break;
	       }


   cp = (cp == 'O' ? 'X' : 'O');   //main statment for switch player.

         
	 
}
else
{
	printf("\033[0;31m this is not valid !\033[0;0m\n");  //control the user.
	continue;
}




}
}
