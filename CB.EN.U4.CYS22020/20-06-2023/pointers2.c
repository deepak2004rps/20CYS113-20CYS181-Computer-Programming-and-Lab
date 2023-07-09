#include <stdio.h>

int main() {
    FILE *file;         // Declare a pointer to a FILE structure
    char filename[100]; // Store the filename
    char ch;            // Store each character read from the file

    printf("Enter the filename: ");
    scanf("%s", filename);  // Read the filename from the user. (NO SPACE in te file name here SPACE acts as a delimiter )

    // Open the file in "r" mode (read mode)
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and print the file contents
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);  // Print each character read from the file
    }

    // Close the file
    fclose(file);

    return 0;
}
