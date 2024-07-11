# include<stdio.h>
int main(){
    int n;
    int i =1;

    printf("구구단 중에서 출력하고 싶은 단을 입력하세요:");
    scanf("%d",&n);

    while(i<10){
        printf("%d*%d = %d입니다.\n",n,i,n*i);
        i++;
    }
    return 0;
}