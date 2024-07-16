#include <stdio.h>
#include <stdlib.h>
void init_board(char board[][3]);					//함수 프로토타입 선언
int get_player_move(int palyer, char board[][3]);
void disp_board(char board[][3]);

int main(void)										//메인 함수
{
	char board[3][3]; 								//board는 문자열을 저장하는 2차원 배열
	int quit=0;										//quit값은 0으로 초기화
	init_board(board);								//init_board를 불러온다
	do {											//먼저 실행
		disp_board(board);							//disp_board를 불러온다
		quit = get_player_move(0, board);			//quit=get_player_move함수에 0,board를 넣은 값으로 대치된다
		disp_board(board); 							//바뀐값으로 다시 disp_board를 불러오고
		quit = get_player_move(1, board);			//quit=get_player)move함수에 1,board를 넣은 값으로 대치된다.
	} while(quit == 0);								//quit이 0일때 실행
	return 0;
}

void init_board(char board[][3])					//init_board는 board[][3]을 매개변수로 가진다.
{	int x, y;											
	for(x=0; x<3; x++)								//행렬의 행만큼 반복
		for(y=0; y<3; y++) 							//행렬의 열만큼 반복
			board[x][y] = ' ';						//baord의 각 인덱스는 공백으로 초기화된다.
}
void disp_board(char board[3][3])
{
	int i;
	for(i=0; i<3; i++){ 							//3열 만큼 반복된다
		printf("---|---|---\n");					//보드판을 그린다
		printf(" %c | %c | %c \n",board[i][0], board[i][1], board [i][2]);	//board의 i행의 값을 각 공백마다 출력한다
	}
	printf("---|---|---\n");
}
int get_player_move(int player, char board[3][3])	//유저가 움직인 말을 표현해주는 함수
{
	int x, y, done = 0;

	while(done != 1) {								//done이 1이 아닐때 동작한다
		printf("(x, y) 좌표(종료-1, -1): ");		  
		scanf("%d %d", &x, &y);						//x,y값을 입력받는다
		if( x == -1 && y == -1 ) 					//만약 x와 y가 1이라면 게임 종료
			return 1;
		if(board[x][y]== ' ') 						//x와y가 공백이라면 루프 탈출
			break; 
		else printf("잘못된 위치입니다.\n");			//그 외의 경우에는 잘못된 입력임을 알려준다
		}

	if( player == 0 ) 								//만약 player가 0이면 해당 위치에 X를 그린다.
		board[x][y] = 'X';
	else board[x][y] = 'O';							//아니라면 O을 그린다.

	return 0;
}
