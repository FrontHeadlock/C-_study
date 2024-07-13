#include<stdio.h>

int FtoC(double f);

int main(void){
    double f,c;                  //f,c를 double형으로 선언
    printf("화씨 온도를 입력하세요: ");
    scanf("%lf",&f);             //화씨온도를 입력받아 f에 저장
    c=FtoC(f);                   //c값은 FtoC에 f값을 넣어 반환된 값
    printf("화씨 온도 %f는 섭씨온도 %f에 해당한다",f,c);

    return 0;
}

int FtoC(double f){
    double c;                   //c double형으로 선언
    c = (5.0*(f-32.0))/9.0;     //섭씨온도를 구하는 공식
    return c;                   //섭씨온도 c반환
}