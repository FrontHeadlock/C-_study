#include <stdio.h> 

int main(void) 
{ 
    int num;
    printf("16진수를 입력하시오: ");            //user에게서 정수를 입력받는다
    scanf("%x", &num);                     //user에게서 %x를 이용해 16진수 값을 입력받아 num변수에 저장한다
    printf("8진수로는 %#o입니다\n", num);      //%#o형식 지정자로 8진수 형식으로 출력한다
    printf("10진수로는 %d입니다\n", num);      //%d형식 지정자로 10진수 형식으로 출력한다
    printf("16진수로는 %#x입니다\n", num);     //%#x형식 지정자로 16진수 형식으로 출력한다
    return 0;

} 