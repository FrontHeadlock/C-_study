#include <stdio.h>

int main(){
    int x,y;

    printf("wrote 2 integer: ");
    scanf("%d%d", &x,&y);

    printf("%d && %d's result: %d\n", x,y,x&&y);
    printf("%d || %d's result : %d\n", x, y, x||y);
    printf("!%d's result: %d",x,!x);

    return 0;

}