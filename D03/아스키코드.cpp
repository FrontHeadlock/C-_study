#include <stdio.h> 

int main(void) 
{ 
    char code1 = 'A';
    char code2 = 65;
    printf("문자 상수 초기화 = %d\n", code1);       // 정수형으로 출력
    printf("문자 상수 초기화 = %c\n", code1);       // 문자형으로 출력
    printf("아스키코드 초기화 = %d\n", code2);
    printf("아스키코드 초기화 = %c\n", code2);
    
    return 0;
} 
