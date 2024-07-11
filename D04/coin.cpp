#include <stdio.h>
#include <stdlib.h>

/*int main(){

    int coin;
    coin = rand();
    printf("%d",coin);
    return 0;
}*/

int main (){
    int n;
    n = rand()%201;
    printf("number의 값은 : %d\n",n);
    if (n>=100)
        printf("large");
    else
        printf("small");
    return 0;
}

