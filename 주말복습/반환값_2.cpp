#include <stdio.h>
int get_int();
int pow(int x, int y);
int main (){

    int a,b;
    a=get_int();
    b=get_int();
    printf("%d의 %d승은 %d입니다.",a,b,pow(a,b));

    return 0;
}
int get_int(){
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d",&n);
    return n;
}
int pow(int x, int y){
    int i;
    long result =1;
    for(i=0;i<y;i++)
        result *= x;
    return result;
}