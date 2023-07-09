#include <stdio.h>

int main() {
    FILE *file;                     // Declare a pointer to a FILE structure
    char filename[100];             // Store the filename
    char content[1000];             // Store the content to be written to the file

    printf("Enter the filename: ");
    scanf("%99s", filename);        // Read the filename from the user

    // Open the file in "r" mode (write mode)
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    else
    {
	   printf("Enter character to be found:\n");

    // Clear the input buffer
    char ch,sch;
    int c=0;
    scanf(" %c",sch);
    while ((ch = getchar()) != sch);
    {
	    if(ch==sch)
	    c=c+1;
    }
	    printf("First occurence of character at %d ",c);

			    }
			    // Close the file
    fclose(file);

    printf("Content written to the file successfully.\n");

    return 0;
}
