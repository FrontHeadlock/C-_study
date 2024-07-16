#include<stdio.h>
int main(){
    int a,sum=0;        //a, sum값 초기화

    while(a<101){       //a가 101보다 작은동안 실행된다
        if(a%3==0)      //a가 3의배수라면
            sum+=a;     //a값을 sum에 더한다
    a++;
}

printf("%d",sum);       //sum을 출력한다.
return 0;
}