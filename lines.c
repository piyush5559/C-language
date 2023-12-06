#include <stdio.h>
#include <stdlib.h>

int main() {
    int lines;
    FILE *fp;

    // Run the 'tput lines' command to get the number of lines on the terminal
    fp = popen("tput lines", "r");
    
    if (fp == NULL) {
        perror("Error running tput command");
        return 1;
    }

    // Read the number of lines
    fscanf(fp, "%d", &lines);

    // Close the file pointer
    pclose(fp);

    // Print the number of lines
    printf("Number of lines on the terminal: %d\n", lines);

    return 0;
}

