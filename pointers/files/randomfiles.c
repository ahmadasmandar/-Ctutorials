#include "book.h"
#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main(void)
{
    char letter;
    fptr = fopen("./letters.txt", "w+");

    if (fptr != 0)
    {
        for (letter = 'A'; letter <= 'Z'; letter++)
        {
            fputc(letter, fptr);
        }
        puts("Just wrote the letters A through Z");
        // Now read the file backwards
        fseek(fptr, -1, SEEK_END); // Minus 1 byte from the end
        printf("Here is the file Backwoards: \n");
        for (int i = 26; i > 0; i--)
        {
            letter = fgetc(fptr);
            // Reads a letter, then backs up 2
            fseek(fptr, -2, SEEK_CUR);
            printf("The next letter is %c.\n", letter);
        }
    }
    else
    {
        printf("There was error opening the File");
        exit(1);
    }

    fclose(fptr);
    return 0;
}
