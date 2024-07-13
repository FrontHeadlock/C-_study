#include<stdio.h>

int is_prime(int);
int get_int(void);

int main(void){

    int n,result;
    n=get_int();                        //정수를 입력받고
    result=is_prime(n);                 //is_prime함수에서 그 값을 돌려 반환값 result에 저장
    if(result==1)                       //result=1이면 소수
        printf("%d은 소수입니다.\n",n);
    else                                //그 외는 소수가 아니다
        printf("%d은 소수가 아닙니다.\n",n);
    return 0;
}

int get_int(void){
    int n;                              
    printf("정수를 입력하세요: ");          
    scanf("%d",&n);                     //정수n을 입력받는다

    return n;                           //입력받은 정수 n 반환
}

int is_prime(int n){                    //n을 매개변수로 사용
    int div=0,i;                        //div=0으로 초기화 
    for(i=1;i<=n;i++){                  //i가 1~n까지 1씩 증가하며 n번 반복
        if(n%i==0)                      //만약 N을 I로 나눈 나머지가 0이라면
            div++;                      //div값 하나씩 증가시킨다
    }
    return (div==2);                    //div값을 2로 반환

}