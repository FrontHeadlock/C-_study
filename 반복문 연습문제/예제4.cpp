#include <stdio.h>

int main() {
    int i, j, row = 6;                      //i,j,row를 정수로 선언
    for (i = 1; i <=row; i++) {             //i=1~row보다 작거나 같은동안 하나씩 증가하며 반복
        for (j = 1; j <= row - i; j++) {    //j=1~row-i보다 작거나 같은동안 하나씩 증가하며 반복
            printf(" ");                    //공백 출력
        }
        for (j = 1; j <= i; j++) {          //j=1~i인 동안 하나씩 증가하며 반복
            printf("*");                    //*출력
        }
        printf("\n");                       //줄바꿈을 진행
    }
                                            //공백은 갈수록 줄고 별은 갈수록 늘어난다
    return 0;
}
