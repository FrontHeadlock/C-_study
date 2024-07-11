#include <stdio.h>
int main(){
    int x,y,r;
    printf("X와 Y를 입력해주세요: ");
    scanf("%d %d",&x,&y);

    while(y!=0){
        r=x%y;
        x=y;
        y=r;
    }
    printf("최대공약수는 %d입니다\n",x);

    return 0;
}