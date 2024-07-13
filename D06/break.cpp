#include<stdio.h>
#define SEED_MONEY 10000000

int main(){

    int year=0, money=SEED_MONEY;
    while(1)
    {
        year++;
        money+=money*0.30;
        if(money>SEED_MONEY*10)
            break;
    }
    printf("%d년",year);
    return 0;
}