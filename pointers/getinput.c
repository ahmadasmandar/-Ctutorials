#include <STDIO.H>
#include <stdlib.h>
#include <string.h>

int main()
{
    //the safe way to use pointer Strings
    char input[80];
    char *pInput   = input;
    char **s_array = calloc(4096, sizeof(char *)); // enough for 4096 strings

    for (int count = 0; count < 3; count++)
    {
        printf("please enter the first name 10 chars: \n");
        scanf("%s", pInput);
        printf("%s \n", pInput);
        
        int len = strlen(pInput);
        if (pInput[len - 1] == '\n')
        {
            pInput[len - 1] = '\0';
            len--;
        }

        s_array[count] = calloc(len + 1, sizeof(char));
        strcpy(s_array[count], pInput);
    }
    printf("new names are : \n");

    for (int j = 0; j < 3; j++)
    {
        printf("%s \n", s_array[j]);
    }
    return 0;
}