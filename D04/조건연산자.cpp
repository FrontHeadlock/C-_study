#include <stdio.h>

int main(){

    int x,y;

    printf("no.1 = ");
    scanf("%d",&x);
    printf("no.2 = ");
    scanf("%d",&y);

    printf("big one : %d\n", (x>y)?x:y);
    printf("small one : %d", (x<y)?x:y);

    return 0;
}