#include <stdio.h>

int main(void){
    float radius;
    float area;

    printf("반지름을 입력하세요: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("원의면적 : %f\n", area);
    return 0;
}