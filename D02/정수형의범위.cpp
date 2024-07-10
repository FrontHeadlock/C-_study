#include <stdio.h> 

int main(void) 
{
    short year = 0;
    int sale = 0;
    long total_sale = 0;

    year = 10000000;
    sale = 200000000;
    total_sale = year*sale;

    printf("year = %hd\n", year);
    printf("total sale = %ld", total_sale);
    return 0;
} 
