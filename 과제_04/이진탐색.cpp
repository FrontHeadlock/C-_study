#include <stdio.h>
#define SIZE 16         //SIZE의 크기를 16으로 고정한다
int binary_search(int list[], int n, int key); //이진탐색 함수의 원형을 선언한다

int main(void){         //메인함수
	int key;
	int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 }; //grade배열의 값을 초기화한다.
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);    //탐색할 값을 key에 저장한다
	printf("탐색 결과= %d\n", binary_search(grade, SIZE, key)); //이진탐색함수에서 값을 가져와 출력한다
	
	return 0;
}

int binary_search(int list[], int n, int key)     // 이진탐색 함수로 매개변수는 int list[],int n, key를 사용한다
{
	int low, high, middle;
	low = 0;                            //low값을 0으로 초기화한다
	high = n-1;                         //high값은 매개변수로 받은 n-1로 초기화한다
	while( low <= high ){ 		        // low가 high보다 작거나 같으면
		printf("[%d %d]\n", low, high);	// 하한과 상한을 출력한다. 
		middle = (low + high)/2;	    // 중간 위치=(상한+하한)/2
		if( key == list[middle] )	    // 키값이 리스트 중간값과 일치하면 중앙값 반환
			return middle;
		else if( key > list[middle] )   // 키값이 중앙값 보다 크다면
			low = middle + 1;	        // 하한을 중앙값+1로 재설정
		else 
			high = middle - 1;	        // 키값이 중앙값보다 작으면 상한은 중앙값-1로 초기화	
	} 
	return -1;                          //키값이 배열에 없으면 -1 반환
}
