#include<stdio.h>
#include<string.h>

int main() {
    char colors[3][7]; // Array to store input color names
    char color_names[10][8] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    int values[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //note that the order of colors and acording them the values 
    int value;
    int boolean;
    long int resistance;
    char lastcol[1][7];

    printf("Enter your first 3 colors: \n");

    // Input the first 3 color bands
    for (int i = 0; i < 3; i++) {
        scanf("%s", colors[i]);
    }//input data stored in colors[i]

    for (int i = 0; i < 3; i++) {
        value = -1;

        // Compare input colors with predefined color names
        for (int j = 0; j < 10; j++) 
	{
            if (strcmp(colors[i], color_names[j]) == 0)
		    /*here we comparing userinput 3
		     colors with all 10 colors and
		     if its same than pick up its value */
	    {
                value = values[j]; // Set value based on the color name
            }
        }

        // Calculate resistance value based on color bands
        if (i == 0) {
            resistance = value * 10;//dasak ni value mate
        } else if (i == 1) {
            resistance += value;//ekam ni value mate
        } else if (i == 2) {
            while (value != 0) //this loop works for 10^value 
	    {
                resistance = resistance * 10;
                value--;
            }
	    /* option of this loop you can also use maths pow() function
	      its your choice */
        }
    }//all done for first 3 color
     //for 4th color work is in process.

    printf("Enter 4th color option (1 for add silver/gold, 0 for print resistance value): ");
    scanf("%d", &boolean);

    if (boolean == 1) {
        printf("Silver or Gold\n");
	scanf("%s",lastcol[0]);
    } else if (boolean == 0) {
        printf("Your resistance is %ld Ω\n", resistance);
    }

    return 0;
}





	
