#include<stdio.h>

int main(){
    int i=0,n,sum=0;

    while(i<5){
        printf("값을 입력하세요:");
        scanf("%d",&n);
        sum=sum+n;
        i++;
    }
    printf("sum = %d",sum);
    return 0;

}