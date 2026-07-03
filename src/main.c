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

    char row[BUFFSZ];
    char*token;
    while (!feof(fptr))
    {
        fgets(row,sizeof(row),fptr);
        printf("Row from string %s",row);
        token = strtok(row,",");
        while(token != NULL)
        {
            double d;
            sscanf(token,"%lf",&d);
            printf("Token is %lf\n",d);
            token = strtok(NULL,",");
        }
    }

    // Read each line of the file.
   /* char line[BUFFSZ];
    while(fgets(line, sizeof(line),fptr))
    {
        printf("The line as a string is %s\n",line);

        char items = strtok(line,",");

        // Print strings
        printf("Bracket %s  ",items[0]);
        printf("Rate %s\n",items[1]);

    }*/


    /*char c;
    char buffer[BUFFSZ];
    float bracket,rate;

    while(fgets(buffer,BUFFSZ,fptr))
    {
        char * token = strtok(buffer,",");
	//printf(token[0]);
	//scanf(token[0],%lf,&bracket);
	//scanf(token[1],%lf,&rate);
	//printf("Bracket: %d, ", bracket);
	//printf("Rate: %d\n", rate);
        while(token)
        {

            printf("Bracket from string is ");

            sscanf(token,"Bracket is %lf ",&bracket);
            sscanf(token,"Rate is %lf\n",&rate);
	        printf("%lf ",bracket);
            printf("%lf\n",rate);
            token = strtok(NULL,",");
        }
    }
*/

    fclose(fptr);

    return 0;
}
