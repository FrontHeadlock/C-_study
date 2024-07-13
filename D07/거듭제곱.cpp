#include<stdio.h>
int get_int();                          //get_int함수의 프로토타입 선언
int power(int x, int y);
int main()
{
    int a,b;                            
    a = get_int();                      //a값이 get_int함수를 통해 생성
    b = get_int();                      
    printf("%d의 %d승은 %d입니다", a,b,power(a,b));     //구해진 a,b값이 power()함수의 매개변수로 넘어감
    return 0;
}

int get_int()                           //get_int 함수
{
    int n;                              
    printf("정수를 입력하시오: ");      
    scanf("%d",&n);                     //n값을 입력받는다 
    return n;                           //n값을 반환
}

int power(int x, int y)                 //매개변수로 x,y 사용하는 power함수
{
    int i;                              //i값을 정수형으로 선언
    long result = 1;                    //result값을 1로 초기화
    for (i=0;i<y;i++)                   //i가 0~y-1까지 하나씩 증가하며 바놉ㄱ
        result *=x;                     //result = result * x
    return result;                      //result값을 반환한다(매개변수x의y승)
}