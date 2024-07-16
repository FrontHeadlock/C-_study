#include<stdio.h>
#include<math.h>                          //sqrt함수 사용위한 라이브러리

int main(){
    int i,isPrime,div;                    //정수i,isPrime,div 선언
                                          //isPrime=플래그변수 1은 소수 0은 소수가 아니다

    for(i=2;i<101;i++){                   //i값이 2~100인 동안 실행
        isPrime=1;                        //isPrime이 소수라 가정하고 시작
        for (div=2;div<=sqrt(i);++div){   //div는2~i의제곱근까지 하나씩 증가하며 반복
            if(i%div==0){                 //만약 i가 div로 나누어떨어진다면
                isPrime=0;                //isPrime=0이 되고(소수가 아니게 되고)
                break;                    //조건문에서 탈출한다
            }
        }
        if(isPrime)                       //만약 isPrime이 소수라면
            printf("%d\n",i);             //i 정수를 출력
    }
    return 0;
}
