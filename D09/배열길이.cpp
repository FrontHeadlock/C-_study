#include<stdio.h>
int main(){
    int grade[]={85,65,90};
    int arr_len=sizeof(grade)/sizeof(grade[0]);

    printf("배열 grade의 길이는 %d입니다.\n",arr_len);
    printf("%lu\n",sizeof(grade));
    printf("%lu\n",sizeof(grade[0]));


    return 0;
}