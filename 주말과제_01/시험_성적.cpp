#include <stdio.h>

int main(){
    int score;                              // 성적을 정수로 입력받는다.
    printf("성적을 입력하시오: ");                 
    scanf("%d",&score);                     // 성적을 입력받아 변수score에 그 값을 저장한다.

    if(score>=60){                          // 만약 성적이 60이상이라면 합격하고 장학금을 받을 수 있다.
        printf("합격입니다!\n");
        printf("장학금도 받을 수 있습니다!\n");
    }
    else{                                   // 그렇지 않은 경우에 실행된다.
        printf("낙제입니다!\n");               // 성적이 60을 넘지 못했다면 낙제를 받게 된다.
    }
    return 0;
}