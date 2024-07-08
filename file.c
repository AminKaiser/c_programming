#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w"); // Open file for writing

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n"); // Write formatted text to the file
    fputs("Another line of text.\n", file); // Write a string to the file

    fclose(file); // Close the file
    return 0;
}

