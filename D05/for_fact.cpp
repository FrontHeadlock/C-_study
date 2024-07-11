#include<stdio.h>
int main(){
    long fact=1;
    int i,n;
    printf("정수 n을 입력하세요 : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("%d는 %ld입니다",n,fact);
    return 0;
}