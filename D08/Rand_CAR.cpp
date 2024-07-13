#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void disp_car(int car_number,int distance);

int main(){

int car1_distance=0,car2_distance=0;
int i;

srand((unsigned) time(NULL));

    for(i=0;i<6;i++)
        car1_distance += rand() % 10; 
		car2_distance += rand() % 10; 
		disp_car(1, car1_distance);
		disp_car(2, car2_distance);
		printf("---------------------\n");
        printf("엔터를 누르세요:");
        getchar();
        getchar();
    return 0;

}

void disp_car(int car_number,int distance){

    int i;
    printf("CAR #%d: ",car_number);

    for(i=0;i<distance/10;i++){
        printf("*");
}
    printf("\n");
}