#include<stdio.h>

int get_int();                          //get_int함수 프로토타입 선언
int combination(int n, int r);
int fact(int n);

int main(){                             //main 함수
    int a,b;            
    a = get_int();                      //a값을 get_int의 매개변수로 전달
    b = get_int();

    printf("C(%d, %d) = %d\n",a,b,combination(a,b)); //a,b값을 combination 매개변수로 전달후 값을 받아 출력
    return 0;
}

int combination(int n, int r){            //combination 함수(n,r값을 매개변수로 사용)
    return (fact(n)/(fact(r)*fact(n-r))); //fact(n)/(fact(r)*fact(n-r))값 반환 
}

int get_int(){                             //정수값을 받는 함수
    int n;                                 //정수 n 선언

    printf("정수를 입력하시오 : "); 
    scanf("%d",&n);                        //정수를 입력받아 변수n에 저장
    return n;                              //n을 반환
}

int fact(int n){                           //factorial 함수
    int i;          
    long result = 1;                       //result값을 1로 초기화
    for (i=1;i<=n;i++)                     //i=1~n까지 하나씩 증가하며 반복
        result *=i;                        //result = result*i
    return result;                         //result값 반환
}