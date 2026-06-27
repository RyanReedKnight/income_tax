#include "../include/income_tax.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define BUFFSZ 400

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
    char buffer[BUFFSZ];

    while(fgets(buffer,BUFFSZ,fptr))
    {
        char * token = strtok(buffer,",");
        while(token)
        {
            double val = atoi(token);
            printf("%d\n",val);
            token = strtok(NULL,",");
        }
    }


    fclose(fptr);

    return 0;
}
