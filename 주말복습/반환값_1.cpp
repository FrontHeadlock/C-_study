#include <stdio.h>

int get_max(int a, int b);

int main(void){
    int a,b;
    printf("두 개의 정수를 입력하세요:");
    scanf("%d %d",&a,&b);
    printf("두 개의 정수중 가장 큰 값은 %d입니다",get_max(a,b));
    return 0;
}

int get_max(int x, int y){
    if(x>y)
        return x;
    else
        return y;
}