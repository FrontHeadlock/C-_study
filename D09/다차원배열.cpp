#include <stdio.h> 

/*int main(void) 
{ 
    int s[3][5];// 2차원 배열 선언 
    int i, j;// 2개의 인덱스 변수 
    int value = 0;// 배열 원소에 저장되는 값 
    
    for(i=0;i<3;i++) 
        for(j=0;j<5;j++) 
            s[i][j] = value++; 

    for(i=0;i<3;i++){
        for(j=0;j<5;j++) 
            printf("%2d ", s[i][j]); 
        printf("\n");
    }

    return 0; 
} */

int main(void) 
{ 
    int s[3][3][3];        // 3차원 배열 선언 
    int x, y, z;           // 3개의 인덱스 변수 
    int i = 1;             // 배열 원소에 저장되는 값 
    
    for(z=0;z<3;z++){
        for(y=0;y<3;y++){ 
            for(x=0;x<3;x++){ 
                s[z][y][x] = i++; 
                printf("%2d ", s[z][y][x]);}
        printf("\n");
        }
    printf("\n");
    }
    return 0; 
} 

