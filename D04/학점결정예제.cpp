#include <stdio.h>

int main(){
    int score;

    printf("write your score : \n");
    scanf("%d",&score);

    if (score>=90)
        printf("pass: grade A\n");
    else if (score>=80)
        printf("pass: grade B\n");
    else if (score>=70)
        printf("pass: grade C\n");
    else if (score>=60)
        printf("pass: grade D\n");
    else
        printf("FAIL: grade F\n");

    return 0;
}