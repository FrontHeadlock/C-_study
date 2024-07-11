/*#include<stdio.h>
int main(){
    int i =0;
    while(i<10)
    {
        printf("i=%d\n", i);
        i++;
    }
    return 0;
}*/

#include <stdio.h>
int main(){
    int meter;
    int i=0;
    while(i<3){
        meter = i*1609;
        printf("%d 마일은 %d 미터입니다\n", i, meter);
        i++;
    }
    return 0;
}