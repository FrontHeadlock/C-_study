#include<stdio.h>
int main(){
    int a,sum=0;        //a값 sum값 초기화

for(a=1;a<=100;++a){    //a가 1~100까지 실행
    if(a%3==0)          //만약 a가 3의 배수라면
        sum+=a;         //sum값에 a값을 더해간다
}

printf("%d",sum);       //sum값을 출력한다.
return 0;
}