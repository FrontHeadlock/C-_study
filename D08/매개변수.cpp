#include<stdio.h>
int inc(int counter);

int main(){
    int i=10;

    printf("함수 호출 전: %d\n",i);
    inc(i);
    printf("함수 호출 후: %d\n",i);
    return 0;
}

int inc(int counter){
    counter++;
    return counter;
}