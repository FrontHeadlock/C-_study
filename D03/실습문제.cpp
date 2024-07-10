#include<stdio.h>


int main (){
/*
태양에서 오는 빛이 몇 분만에 지구에 도달하는지 컴퓨터로 계산
태양과 지구 사이의 거리는 149600000
Light_Speed = 빛의 속도
d = 태양과 지구 사이의 거리
e = 도달 시간
*/

double Light_Speed,d, e,sec;
int min;

Light_Speed = 300000;                               //빛의 속도를 저장하는 변수
d = 149600000;                                      //태양과 지구 사이의 거리
e = d/Light_Speed/60;                               //도달 시간 = 태양-지구 거리/빛의 속도/60

min = (int)e;                                       //분을 계산하기 위해 e의 정수부만 가지고 온다.
sec = (e-min)*60;                                   //초를 계산하기 위해 e의 소수부를 초로 변환한다.

printf("빛의 속도 : %fkm/s\n", Light_Speed);
printf("태양과 지구 사이의 거리 : %fkm\n", d);
printf("태양에서 오는 빛이 지구에 도달하는 시간 : %d분 %.0f초\n", min,sec);

return 0;

}