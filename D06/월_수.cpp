#include <stdio.h> 
#define START_DAY 3
#define DAYS_OF_MONTH 31

int main(void) 
{ 
int day, date; 
printf("=====================\n"); 
printf("일 월 화 수 목 금 토\n"); 
printf("=====================\n"); 

for(day = 0; day < START_DAY ; day++)           //day가 0부터 3보다 작을때까지 하나 씩 더해가며 공백 출력 
printf("   ");

for(date = 1; date <= DAYS_OF_MONTH ; date++)   //date=1부터 31까지 하나씩 늘어나며 실행
{ 
    if( day == 7 ) {                            //day ==7일때 
        day = 0;                                //day = 0으로 초기화되고 줄바꿈
        printf("\n");
    } 
    day++;                                      //다시 day를 하나 늘리고 두자리 정수로 date 출력 
    printf("%2d ", date); 
} 

printf("\n=====================\n"); 
return 0; 
} 
