#include<stdio.h>

int main(){

    int a,b,c,result;                           //a,b,c,result는 정수형이다.
    printf("현재 가지고 있는 돈:");
    scanf("%d", &a);                            //a의 값을 입력받아 a에 저장한다.
    printf("캔디의 가격:");
    scanf("%d", &b);
    c = a / b;                                  //최대로 구입가능한 캔디 수 c = a/b이다.
    printf("최대로 구입 가능한 캔디의 수: %d\n", c);
    result = a - (b*c);                         //result를 구하기 위한 공식이다.
    printf("캔디 구입 후 남은 돈: %d\n", result);

    return 0;
}