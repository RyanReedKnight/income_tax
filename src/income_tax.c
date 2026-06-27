#include "../include/income_tax.h"
#include<stdlib.h>


struct Bracket * mkbracket(double rate, double lower_limit, double upper_limit)
{
    struct Bracket *bracketp = malloc(sizeof(struct Bracket));
    bracketp->rate = rate;
    bracketp->lower_limit = lower_limit;
    bracketp->upper_limit = upper_limit;

    return bracketp;
}
