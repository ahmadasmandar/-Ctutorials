#include "book.h"
#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main(void)
{
    unsigned int ctr = 0;
    fptr             = fopen("./ahmad.txt", "w");

    struct book *books[3];
    for (ctr = 0; ctr < 3; ctr++)
    {
        books[ctr] = (struct book *)malloc(sizeof(struct book));
        printf("What is the name of the book #%d?\n", (ctr + 1));
        gets(books[ctr]->title);
        puts("Who is the author? ");
        gets(books[ctr]->author);
        puts("How much did the book cost? ");
        scanf_s("%f", &books[ctr]->price);
        puts("How many pages in the book? ");
        scanf_s("%d", &books[ctr]->pages);
        //for the new line \n
        getchar();
    }

    fprintf(fptr, "\n Here is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)

    {
        fprintf(fptr, "#%d: %s by %s ", (ctr + 1), books[ctr]->title, books[ctr]->author);
        fprintf(fptr, "\n It is %d pages and costet %.2f ", books[ctr]->pages, books[ctr]->price);
        fprintf(fptr, "\n\n");
    }
    fclose(fptr);
    return 0;
}
