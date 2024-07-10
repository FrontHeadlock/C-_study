//주석
#include <stdio.h>

int main (void){
    int x;
    int y;
    int sum;

    printf("1번째 숫자를 입력하시오:");
    scanf("%d", &x);

    printf("2번째 숫자를 입력하시오:");
    scanf("%d", &y);

    sum = x+y;
    printf("두 수의 합: %d", sum);
    return 0;

}


/*
예제 프로그램
아무말이나 길게 쓰는 주석

변수 명에는 특수문자가 오지않으며 오더라도 단하나 _만 가능
숫자로 존재할 수 없다.
*/