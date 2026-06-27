#ifndef INCOME_TAX_H
#define INCOME_TAX_H

struct Bracket
{
    double rate;
    double lower_limit;
    double upper_limit;
};
struct Bracket * mkbracket(double, double, double);



#endif
