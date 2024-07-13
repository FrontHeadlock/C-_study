#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10

int main(void){

    int i;
    srand((unsigned) time(NULL));
    for(i=0;i<6;i++)
        printf("%d\n",1+rand()%MAX);
    return 0;
}