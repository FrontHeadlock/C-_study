#include <stdio.h>

int main(){
    int year = 0, year1;
    double m = 100.0, current_m;

    printf("반감기를 입력하시오: ");
    scanf("%d", &year1);

    current_m = m;
    while(current_m > m * 0.1){
        year += year1;
        current_m = current_m * 0.5;
        printf("%d년 후에 남은 양 = %f\n", year, current_m);
    }
    printf("1/10 이하로 되기까지 걸린 시간 = %d년\n", year);
    return 0;
}

