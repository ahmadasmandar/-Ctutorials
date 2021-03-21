#include "book.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int ctr;
    //create // Array of three structurevariables

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
        getchar();
    }

    printf("\n Here is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)

    {
        printf("#%d: %s by %s ", (ctr + 1), books[ctr]->title, books[ctr]->author);
        printf("\n It is %d pages and costet %.2f ", books[ctr]->pages, books[ctr]->price);
        printf("\n\n");
    }

    return 0;
}

//! this version is without Heap and pointers
// int main(void)
// {
//     int ctr;
//     struct book books[3];
//     for (ctr = 0; ctr < 3; ctr++)
//     {
//         printf("What is the name of the book #%d?\n", (ctr + 1));
//         gets(books[ctr].title);
//         puts("Who is the author? ");
//         gets(books[ctr].author);
//         puts("How much did the book cost? ");
//         scanf_s("%f", &books[ctr].price);
//         puts("How many pages in the book? ");
//         scanf_s("%d", &books[ctr].pages);
//         getchar();
//     }

//     printf("\n Here is the collection of books: \n");
//     for (ctr = 0; ctr < 3; ctr++)

//     {
//         printf("#%d: %s by %s ", (ctr + 1), books[ctr].title, books[ctr].author);
//         printf("\n It is %d pages and costet %.2f ", books[ctr].pages, books[ctr].price);
//         printf("\n\n");
//     }

//     return 0;
// }