#include <stdio.h>

int main (){
    int x ,y= 0;
    int result;


    result = 2>3 or 6>7;
    printf("%d\n",result);

    result = 2 or 3 and 3 > 2;
    printf("%d\n",result);

    result = x=y=1;
    printf("%d\n",result);

    result = -++x + y--;
    printf("%d\n",result);

    return 0;
}   