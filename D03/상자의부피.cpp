#include <stdio.h> 

int main(void) 
{ 
    double v,x,y,h;                         // v,x,y,h는 double형으로 입력받는다.

    printf("길이, 넓이, 높이를 입력하세요 : ");
    scanf("%lf %lf %lf", &x, &y, &h);       // 공백으로 구분해 x,y,h를 입력받는다.
    
    v = x*y*h;                              // 부피 V는 x*y*h이다.

    printf("부피는 %f입니다",v);
    
	return 0;
} 