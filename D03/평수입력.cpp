#include <stdio.h> 
#define p 3.3                      // 기호 상수p의 값을 3.3으로 정의한다.

int main(void) 
{ 
    double x,s;                    // 변수 x,s는 double형으로 선언한다.

    printf("평 수를 입력하세요 :");
    scanf("%lf", &x);              // 평수를 입력받아 x에 저장한다.

    s = x * p;                     // 평수는 x*p이다.
    printf("평수는 %f평 입니다.", s);
    
	  return 0;
} 