#include "book.h"
#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main(void)
{
    char fileLine[100];
    fptr = fopen("./ahmad.txt", "r");

    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }

    fclose(fptr);
    return 0;
}
