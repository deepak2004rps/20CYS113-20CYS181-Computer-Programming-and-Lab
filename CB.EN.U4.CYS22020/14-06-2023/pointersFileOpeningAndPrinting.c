#include<stdio.h>
int main()
{
        FILE *fd;
        char ch;
        fd = fopen("/home/deepak/a.txt","r");
        if (fd==NULL)
        {
                printf("The file can't be accessed");
        }
        else
        {
                printf("File opened successfully\n");
        }

    // Printing what is written in file
    // character by character using loop.
        do {
                ch = fgetc(fd);
                printf("%c", ch);

        // Checking if character is not EOF.
        // If it is EOF stop reading.
           }
        while (ch != EOF);

    // Closing the file
        fclose(fd);
    return 0;
}
