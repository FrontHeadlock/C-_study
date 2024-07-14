#include <stdio.h>
#define SIZE 10

int main(void)
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };  //원래 배열
	int i, j, temp, least;

	for(i = 0; i < SIZE-1; i++)             //for반복문
	{ 
		least = i;                                      
		for(j = i + 1; j < SIZE; j++)       //이중 for문
			if(list[j] < list[least])       //배열의 최솟값 찾아감
				least = j;                  //만약 j가 least보다 작으면 least를 j로 변경

		temp = list[i];                     //list[i]값은 temp에 저장
		list[i] = list[least];              //이후 list i를 least에 저장
		list[least] = temp;                 //least를 temp에 넣어 값 변경
	}

    for(i = 0;i < SIZE; i++)                //다시 for문을 돌려
	    printf("%d ", list[i]);             //정렬된 배열을 보여준다

	printf("\n");
	return 0;
} 
