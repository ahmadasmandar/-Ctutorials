#include <STDIO.H>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//int getSizeOfArray(int arry[])
//{
//    int length= sizeof(arry)/sizeof(arry[0]);
//    return length;
//}

int main()
{
    //the safe way to use pointer Strings
    char input[80];
    char *pInput=input;



    int *pNum;
    int age=20;
    pNum=&age;

    printf("the int pointer adress %d \n", &pNum);
    printf("the int pointer value %d \n", *pNum);


    char *pName = "Ahmad Asmandar\n";
    printf("the char pointer adress %d \n", &pName);
    printf("the char pointer value s %s \n", pName);
    printf("%s",pName);
    pName= "Jullnar Ismaill\n";
    printf("%s\n",pName);

    gets(pInput);

    printf("%s", pInput);

    return 0;

}

