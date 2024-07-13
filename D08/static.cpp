#include<stdio.h>
void sub(void);

int main (){

    int i;                  //i 지역변수    
    for(i=0;i<3;i++){       //i=0~2일때 3번 반복
        sub();              //sub함수 호출
    }

    return 0;
}

void sub(void){             //sub함수
    int auto_count=0;           //auto_count=0 초기화
    static int static_count=0;  //static_count=0 초기화
    
    auto_count++;               //auto_count 1 추가
    static_count++;             //static_count 1추가(정적변수)
    printf("auto_count= %d\n",auto_count);
    printf("static_count= %d\n",static_count);
}