#include <stdio.h>

int is_prime(int);
int minmax(int, int);
int maxmin(int, int);

int main() {
    int a;
    int b1, b2, b3, b4, b5;
    int result1, result2, result3;

    while(1) {
        printf("어떤 연산을 하시겠습니까? 1.소수판별, 2.최대공약수 찾기, 3.최소공배수 찾기 (-1입력시 종료합니다.): ");
        scanf("%d", &a);

        if(a == 1) {
            printf("소수 판별 프로그램입니다. 숫자를 입력하세요: ");
            scanf("%d", &b1);
            result1 = is_prime(b1);
            if(result1 == 1)
                printf("소수입니다.\n");
            else   
                printf("소수가 아닙니다.\n");

        } else if(a == 2) {
            printf("최대공약수 판별 프로그램입니다. 숫자를 두개 입력하세요: ");
            scanf("%d%d", &b2, &b3);
            result2 = minmax(b2, b3);
            printf("최대공약수는 %d입니다.\n", result2);

        } else if(a == 3) {
            printf("최소공배수 판별 프로그램입니다. 숫자를 두개 입력하세요: ");
            scanf("%d%d", &b4, &b5);
            result3 = maxmin(b4, b5);
            printf("최소 공배수는 %d입니다.\n", result3);

        } else if(a == -1) {
            break;
        } else {
            printf("올바른 숫자를 다시 입력해주세요.\n");
        }
    }

    return 0;
}

int is_prime(int b1) {
    int div = 0, i;
    for(i = 1; i <= b1; i++) {
        if(b1 % i == 0)
            div++;
    }
    return (div == 2);
}

int minmax(int b2, int b3) {
    while(b3 != 0) {
        int t = b3;
        b3 = b2 % b3;
        b2 = t;
    }
    return b2;
}

int maxmin(int b4, int b5) {
    return (b4 * b5) / minmax(b4, b5);
}
