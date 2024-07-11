#include <stdio.h>
#include <limits.h>

int main(){
    int num,min_val=INT_MAX;
    printf("정수를 입력하세요\n 종료는 ctrl+D\n");
    while (scanf("%d",&num)!=EOF)
    {
        if(num<min_val)
            min_val=num;
    }
    printf("최솟값은 %d", min_val);
    return 0;
}