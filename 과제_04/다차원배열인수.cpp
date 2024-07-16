#include <stdio.h> 
#define YEARS 3             //YEARS 값을 3으로 고정
#define PRODUCTS 5          //PRODUCTS 값을 5로 고정

int sum(int grade[][PRODUCTS]);     //sum함수의 원형을 선언

int main(void) 
{ 
    int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };   //2차원 배열 sales 값 초기화
    int total_sale;     
    total_sale = sum(sales);        //total_sale은 sum함수에 sales 배열값을 넣어 나온 값

    printf("총매출은 %d입니다.\n", total_sale); 
    return 0; 
} 
int sum(int grade[][PRODUCTS])      //sum함수는 매개변수로 grade[][PRODUCTS]사용
{ 
    int y, p; 
    int total = 0;                      //total값 0으로 초기화
    for(y = 0; y < YEARS; y++)          //y는 YEARS 횟수만큼 반복
        for(p = 0; p < PRODUCTS; p++)   //PRODUCTS 횟수만큼 다시 반복
            total += grade[y][p];       //total 값은 grade 2차원 배열의 모든 값을 더해서 저장
    return total;                       //total 값 반환
} 