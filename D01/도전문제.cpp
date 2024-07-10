#include <stdio.h>

int main(void){
    double w,h,perimeter,area;
    w = printf("w를 입력하세요 : ");
    scanf("%lf", &w);
    h = printf("h를 입력하세요 : ");
    scanf("%lf", &h);
    area = w*h;
    perimeter = 2 * (w+h);
    printf("사각형의 넓이 :%.3f, 사각형의 둘레: %.3f\n",area, perimeter);

    return 0;
}