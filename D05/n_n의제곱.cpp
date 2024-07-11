#include <stdio.h>

int main(){ 
    int i;

    printf("===============================\n");
    printf("      n          n의 제곱       \n");
    printf("===============================\n");

    i=1;
    while(i<11){
        printf("      %d             %d       \n",i,i*i);
        i++;
    }

    return 0;
}