#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    // char hold[20];
    char *iptr[20];
    char *StrArray[3];
    unsigned int len;

    for (int i = 0; i < 3; i++)
    {
        printf("please enter the first name 10 chars: \n");
        scanf("%s", iptr);
        printf("%s \n", iptr);
        len = strlen(iptr);
        if (iptr[len - 1] == '\n')
        {
            iptr[len - 1] = '\0';
            len--;
        }
        StrArray[i] = calloc(len + 1, sizeof(char *));
        strcpy(StrArray[i], iptr);
        // StrArray[i]=iptr;
        printf("StrArray[%d]: %s \n", i, StrArray[i]);
    }

    printf("new names are : \n");

    for (int j = 0; j < 3; j++)
    {
        printf("%s \n", StrArray[j]);
    }
    free(StrArray);
    return 0;
}