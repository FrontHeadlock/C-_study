#include <stdio.h>

int main(void){
    int salary;
    int deposit;

    printf("월급을 입력하세요: ");
    scanf("%d", &salary);

    deposit = 10 * 12 * salary;

    printf("10년 동안의 저축액 : %d\n", deposit);
    return 0;
}