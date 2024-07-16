#include <stdio.h>
#define SIZE 10
int main(void)
{
	char ans1;	
	int ans2,i;
	int seats[SIZE] = {0};      //seat배열을 초기화
	while(1)                    //while문은 무조건 실행된다.
	{		
		printf("좌석을 예약하시겠습니까?(y 또는n) ");		
		scanf("  %c",&ans1);    //입력받은 답은 ans1에 저장된다.
        if(ans1 == 'y')         //만약 ans1가 참이라면 아래 행을 실행한다
            {
                printf("-------------------------------\n");			
                printf(" 1 2 3 4 5 6 7 8 9 10\n");
                printf("-------------------------------\n");

                for(i = 0; i < SIZE; i++)       //SIZE 횟수만큼 반복된다 (현재 좌석 예약 상태를 출력)
                    printf(" %d", seats[i]);    //seat배열에 저장된 값들을 모두 꺼내온다
                printf("\n");                   //줄바꿈을 실행한다

                printf("몇번째 좌석을 예약하시겠습니까");   
                scanf("%d",&ans2);              //다시 값을 입력받아 ans2에 저장한다.
            

            if(ans2 <= 0 || ans2 > SIZE) {          //만약 ans2 0보다 작거나 같거나 혹은 SIZE보다 큰 경우 실행된다
				printf("1부터 10사이의 숫자를 입력하세요\n");
                    continue;                   //continue문으로 다시 돌아간다
			}

			if(seats[ans2-1] == 0) {            //ans2에서-1값을 인덱스로 갖는 seats 배열이 0이라면
				seats[ans2-1] = 1;              //그 값을 1로 바꾼다
				printf("예약되었습니다.\n");        //예약되었음을 알려준다.
			}
			else				                //이 중 무엇도 아니라면
				printf("이미 예약된 자리입니다.\n");  //이미 예약된 자리임을 알려준다 
        }   
		else if(ans1 == 'n')                     //입력받은 ans1값이 n이라면
			return 0;                            //끝낸다
	}
	return 0;
}
