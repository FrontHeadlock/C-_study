#include<stdio.h>
#include<stdlib.h>              //rand를 사용하기 위한 라이브러리

int main(){         
int a,b,sum=0;                  //a,b선언 sum 0으로 초기화
a=rand()%100;                   //100보다 작은 정수로 난수생성
b=rand()%100;

while(1){                       //while이 참이라 언제나 반복
printf("산수문제를 자동으로 출력합니다");
printf("%d + %d = ",a,b);       
scanf("%d",&sum);               //사용자가 추측하는 값 sum을 입력받는다

if(a+b==sum){                   //만약 sum이 a+b라면
    printf("맞았습니다");          //맞았음을 알려주고
    break;                      //반복문에서 탈출한다
}
printf("틀렸습니다\n");
continue;                       //아니라면 계속 반복한다
}

return 0;
}