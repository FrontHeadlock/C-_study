#include <stdio.h>
void multitable(int dan, int n);

int main(){
    int dan;
    printf("출력할 단을 입력하시오: ");
    scanf("%d",&dan);
    multitable(dan,1);
    return 0;
}

void multitable(int dan,int n){

    for(int n;n<10;n++)
        printf("%d*%d=%d\n",dan,n,dan*n);
    return ;
}

    /*
    3*1=3
    3*2=6
    3*3=9
    3*4=12
    ~~
    */
