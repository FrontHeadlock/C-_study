#include<stdio.h>

int main(){
    int ans=59;                             //정수 ans=59(정답)
    int guess;
    int tries=0;                            //tries를 0으로 초기화해 더해간다.

    do{
        printf("정답을 추측하여 보세요: ");
        scanf("%d",&guess);                 //사용자가 추측하는 정수
        tries++;
        if(guess>ans)                       //만약 추측정수>실제정수
            printf("제시한 정수가 높습니다\n");   //정수가 높다 출력
        if(guess<ans)                       //만약 추측정수<실제정수
            printf("제시한 정수가 낮습니다\n");   //정수가 낮다 출력
    }while (guess!=ans);                    //실제 정수와 추측 정수가 다른 동안 실행
        printf("축하합니다! 시도횟수=%d",tries); //맞았다면 시도횟수를 출력한다
    
    return 0;


}