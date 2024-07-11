/*#include <stdio.h>
int main(){

    int year, result;

    printf("write year: ");
    scanf ("%d",&year);

    result = ((year % 4 ==0) and (year%100!=0) )or (year%400 ==0);
    printf("result : %d",result);

    return 0;
}*/

#include <stdio.h> 

int main(void) 
{ 
int year; 
 printf("연도를 입력하시오: "); 
scanf("%d", &year); 
 
if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
printf("%d년은 윤년입니다.\n", year); 
else 
printf("%d년은 윤년이 아닙니다.\n", year); 

return 0; 
} 
