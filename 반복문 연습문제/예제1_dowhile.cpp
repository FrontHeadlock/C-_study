#include<stdio.h>
int main(){
    int a=1,sum=0;          //a와 sum값을 정수형으로 선언 및 초기화

    do{                     //do를 실행한다
        if(a%3==0)          //a가 3의배수라면   
            sum+=a;         //a를 sum값에 더한다
        a++;                //이후 a를 1 증가시킨다
    }
    while(0<a && a<101);    //a가 0보다 크고 101보다 작은 동안 반복한다

printf("%d",sum);           //sum을 출력한다

return 0;
}