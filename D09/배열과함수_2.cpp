#include <stdio.h> 
#define SIZE 7 

void square_array(int a[], int size); 
void print_array(int a[], int size); 

int main(void) 
{ 
    int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 } ; 

    print_array(list, SIZE);       //print_arr로 원본 전달 후 출력
    square_array(list, SIZE);      //square_arr 호출 값 변경
	print_array(list, SIZE);       //print_arr로 변경된 값 전달 후 출력

return 0; 
} 

void square_array(int a[], int size) { 
    int i; 

    for(i = 0; i < size; i++) 
        a[i] = a[i] * a[i];        //자기자신의 제곱으로 값 변경
} 

void print_array(int a[], int size) { 
    int i; 

    for(i = 0; i < size; i++) 
        printf("%3d ", a[i]);       //입력받은 배열 그대로 출력
    printf("\n"); 
} 
