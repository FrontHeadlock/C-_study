#include <stdio.h> 
#define STUDENTS 5 
int get_average(int score[], int n);        //함수 프로토타입 선언

int main(void) 
{ 
    int grade[STUDENTS] = { 1, 2, 3, 4, 5 };    //grade 배열과 원소 초기화
    int avg; 

    avg = get_average(grade, STUDENTS);         //메인함수의 avg 사용위해 get_avg호출
    printf("평균은 %d입니다.\n", avg);              
    return 0; 
} 

int get_average(int score[], int n)         //get_avg는 매개변수로 int score[],int n 사용
{ 
    int i; 
    int sum = 0;                                //sum 0으로 초기화

    for(i = 0; i < n; i++)                      //for문을 n번 반복
        sum += score[i];                        //score 배열을 0~n-1까지 sum에 저장
    return sum / n;                             //sum값을 모집단 수 만큼 나눈 값을 반환
} 
