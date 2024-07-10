#include <stdio.h> 

int main(void) 
{ 
    double E,m,V;                      // 자료형은 double로 입력받는다.

    printf("질량을 입력하세요 :");
    scanf("%lf", &m);                   // 질량을 입력받아 m에 저장한다.
    printf("속도를 입력하세요 :");
    scanf("%lf", &V);                   // 속도를 입력받아 V에 저장한다.

    E = (m*V*V)/2;                      // 운동에너지E 를 구하기 위한 공식
    printf("운동에너지는 %f입니다.", E);     // 구한 E를 출력한다.

	return 0;
} 