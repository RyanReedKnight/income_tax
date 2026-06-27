#include "../include/income_tax.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char oregon_single[] = "stuff/oregon_single.csv";

int main(void)
{
    FILE *fptr =fopen(oregon_single,"r");

    if(!fptr)
    {

        printf("Cant open file. return 1\n");
        return 1;

    }


    char c;

    while((c = fgetc(fptr)) !=EOF)
    {



    }


    fclose(fptr);

    return 0;
}
