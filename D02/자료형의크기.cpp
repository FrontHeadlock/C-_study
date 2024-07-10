#include <stdio.h>

int main (){
    int x;

    printf("변수 x의 크기: %d\n", sizeof(x));
    printf("char형의 크기: %d\n", sizeof(char));
    printf("int형의 크기: %d\n", sizeof(int));
    printf("short형의 크기: %d\n", sizeof(short));
    printf("long형의 크기: %d\n", sizeof(long));
    printf("float형의 크기: %d\n", sizeof(float));
    printf("double형의 크기: %d\n", sizeof(double));

    return 0;
}

// long형만 크기가 일반 visual studio와 다름
// 일반 visual studio는 4 Mac에서는 8
// 맥에서 long으로 돌리는 것과 윈도우에서 호환이 다르기 때문