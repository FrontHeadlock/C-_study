/*
로또번호를 출력하는 프로그램을 작성하라
게임수는 콘솔창에서 입력 받을 수 있다. (0과 음수는 예외처리 코드 작성)
번호는 1~45중 랜덤 라이브러리 함수로 무작위 출력
한 게임 내 중복된 숫자 출력 불가

실행 예시)
게임 수 입력
3
인생이 바뀔지도 모르는 번호입니다.
10 1 2 5 3 7 (6개 번호)
11 12 13 5 3 9 
6 1 2 5 19 9
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int i,k,n;

    srand((unsigned)time(NULL));

    printf("게임 수를 입력하십시오 : ");
    scanf("%d",&n);
    printf("인생이 바뀔지도 모르는 번호입니다.\n");
    for(i=0;i<n;i++){
        for(k=0;k<6;k++)
            printf("%2d ",1+rand()%45);
        printf("\n");
    }
    return 0;
}