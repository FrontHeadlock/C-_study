#include<stdio.h>

int main(){
    int grade,n;
    float sum,avg;

    n =0;
    sum =0;
    grade =0;

    printf("종료하시려면 음수 입력\n");

    while(grade>=0){
        printf("성적을 입력하세요:");
        scanf("%d",&grade);

        sum += grade;
        n++;
    }
    sum = sum - grade;
    n--;
    avg = sum/n;
    printf("성적의 평균은 %f입니다\n",avg);
    return 0;
}