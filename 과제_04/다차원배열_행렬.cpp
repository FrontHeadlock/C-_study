#include <stdio.h> 
#define ROWS 3                              //ROWS값을 3으로 고정
#define COLS 3                              //COLS값을 3으로 고정

int main(void) 
{ 
    int A[ROWS][COLS] = {{ 2,3,0 },         //2차원 A행렬 값 초기화
                        { 8,9,1 }, 
                        { 7,0,5 } };        
    int B[ROWS][COLS] = {{ 1,0,0 },         //2차원 B행렬 값 초기화
                        { 1,0,0 }, 
                        { 1,0,0 } }; 
    int C[ROWS][COLS];                      //2차원 C행렬 선언
    int r,c; 
    // 두개의 행렬을 더한다. 
    for(r = 0;r < ROWS; r++)                //행렬의 행만큼 반복
        for(c = 0;c < COLS; c++)            //행렬의 열만큼 반복
             C[r][c] = A[r][c] + B[r][c];   //C행렬의 각 인덱스는 A와B 행렬의 인덱스 값을 더한 값
    // 행렬을 출력한다. 
    for(r = 0;r < ROWS; r++) {              //행렬의 행만큼 반복
        for(c = 0;c < COLS; c++)            //행렬의 열만큼 반복
            printf("%d ", C[r][c]);         //C행렬 출력
        printf("\n");                       //줄바꿈
    } 
    return 0;
}
