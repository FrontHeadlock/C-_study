#include<stdio.h>

int get_int(){
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d",&value);
    return (value);                   //괄호 여부는 그냥 스타일의 차이 (문제X)
}

int main(){
    int x= get_int();
    int y= get_int();
    int result = x+y;
    printf("sum X+Y = %d \n",result);
    return 0;
}