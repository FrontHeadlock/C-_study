#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main(){
    FILE *fp = NULL;
    fp = fopen("sample.txt","w");   //쓰기모드로 파일 생성
    if(fp==NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");
    
    fclose(fp);
    return 0;
}

int main(){

    if(remove("sample.txt")==-1)
        printf("sample.txt를 삭제할 수 없습니다.");
    else   
        printf("sample.txt를 삭제하였습니다.");

    return 0;
}


//문자 단위 입출력

#include <stdio.h>

int main(){
    FILE *fp = NULL;

    fp = fopen("sample.txt","w");       //쓰기 모드로 sample.txt 생성
    if(fp==NULL)                        //만약 fp가 없다면 실패라고 알려준다
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공");

    fputc('a',fp);                      //fp에 a를 추가
    fputc('b',fp);      
    fputc('c',fp);
    fputc('d',fp);
    
    fclose(fp);                         //파일을 닫는다 
    return 0;
}

int main(){

    FILE *fp = NULL;
        int c;
        fp = fopen("sample.txt", "r");      //읽기 모드로 가져온다
         if( fp == NULL )               
               printf("파일 열기 실패\n");
        else 
               printf("파일 열기 성공\n");
 
        while((c = fgetc(fp)) != EOF )      //파일의 끝에 도달할 때까지 파일에서 문자를 읽어온다
                                            //fgetc는 파일에서 한 문자를 읽어온다. (파일이 EOF가 아닐 때까지)
	        putchar(c);
        
        fclose(fp);
        return 0;

}

 
int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer[100];
 
	printf("원본 파일 이름:  ");        
	scanf("%s", file1);	
 
	printf("복사 파일 이름:  ");
	scanf("%s", file2);	
 
	// 첫번째 파일을 읽기 모드로 연다.
	if( (fp1 = fopen(file1, "r")) == NULL )
	{
		fprintf(stderr,"원본 파일 %s을 열 수 없습니다.\n", file1); 
        //fprintf() = 포맷팅된 출력을 지정된 출력 스트림에 기록하는 함수 (첫번째 인자는 출력할 스트림을 지정한다 = stderr)
        //stderr = 표준오류 스트림,오류메시지가 표준 출력과 구분되어 사용 가능하다
		exit(1);
	}
	// 두번째 파일을 쓰기 모드로 연다.
	if( (fp2 = fopen(file2, "w")) == NULL )
	{
		fprintf(stderr,"복사 파일 %s을 열 수 없습니다.\n", file2);
		exit(1);
	}
 
	// 첫번째 파일을 두번째 파일로 복사한다.
	while( fgets(buffer, 100, fp1) != NULL )
    //fgets = fp1에서 최대 100-1문자를 읽어서 buffer에 저장한다. 읽은 문자열의 끝에는 널문자(\0)가 추가된다
    //파일의 끝에 도달하면 널문자 반환
		fputs(buffer, fp2);	
        //buffer를 fp2에 넣어준다
	fclose(fp1);
	fclose(fp2);
 
	return 0;
} 

int main(void)
{
	FILE *fp;                           //File 포인터
	char fname[128];                    //배열 선언
	char buffer[256];
	char word[256];
	int line_num = 0;                   //행 초기화

	printf("입력 파일 이름을 입력하시오:  ");
	scanf("%s", fname);	                //찾을 파일 명

	printf("탐색할 단어를 입력하시오:  ");
	scanf("%s", word);                  //탐색할 키값
    	// 파일을 읽기 모드로 연다.
	if( (fp = fopen(fname, "r")) == NULL )                      //만약 읽기 모드로 열려는 파일을 찾을 수 없다면
	{
		fprintf(stderr,"파일 %s을 열 수 없습니다.\n", fname);        //fname이란 파일에 대한 표준 오류 스트림으로 파일을 열 수 없음을 알려줌
		exit(1);                                                //오류 상황임을 의미
	}   
	while( fgets(buffer, 256, fp) )                             //File에서 최대 255문자를 읽어서 buffer에 저장         
	{
		line_num++;                                             //한 번 읽을 때마다 행 넘버 1씩 증가
		if( strstr(buffer, word) )                              
        //strstr = 문자열 내에서 특정 부분 문자열을 찾는 함수
        //buffer 문자열에서 탐색할 키 값을 찾는다
		{
   		     printf("%s: %d행에서 단어 %s이 발견되었습니다.\n", fname, line_num, word );
            //방금 연 파일에서 몇 행에 탐색할 단어가 발견 되었음을 알려준다.
		}
	}
	fclose(fp);
	return 0;
} 
*/

int main(){
    FILE *fp;                                   //파일 포인터로 연결        
	char fname[100];
	int number, count = 0;                      //number값과 count값 0으로 초기화
	char name[20];
	float score, total = 0.0;                   //score값과 total값을 초기화

	printf("성적 파일 이름을 입력하시오:  ");           
	scanf("%s", fname);	                        //성적 파일 이름 입력받는다

	if( (fp = fopen(fname, "w")) == NULL )      //쓰기 모드로 성적 파일을 연다
	{
		fprintf(stderr,"성적 파일 %s을 열 수 없습니다.\n", fname);  //오류나면 출력
		exit(1);                                              //예외사항이니까 exit(1)
	}
    	// 사용자로부터 학번, 이름, 성적을 입력받아서 파일에 저장한다.
	while( 1 )                                  //항상 반복
	{
		printf("학번, 이름, 성적을 입력하시요: (음수이면 종료)");
		scanf("%d", &number);                           //학번을 입력받고
		if( number < 0 )                                //탈출할 수 있는 상황
            break;
		scanf("%s %f", name, &score);                   //이름과 성적을 입력받는다
		fprintf(fp, "%d %s %f\n", number, name, score); //파일에 입력받은 number,name,score 출력
	}
	fclose(fp);
	
	if( (fp = fopen(fname, "r")) == NULL )              //성적 파일 읽기 모드로 다시 연다
	{
		fprintf(stderr,"성적 파일 %s을 열 수 없습니다.\n", fname);
		exit(1);
	}
    // 파일에서 성적을 읽어서 평균을 구한다.
	/*while( !feof( fp ) )                                //파일의 끝에 도달하기 전까지 반복
	{
		fscanf(fp, "%d %s %f", &number, name, &score);  //파일에서 학번,이름,성적을 받아온다
		total += score;                                 //score의 값을 total에 누적시켜 저장한다
		count++;                                        //한번 저장할 때 count값을 하나 증가시킨다
	}*/

    while(fscanf(fp,"%d %s %f", &number, name, &score)==3)
    {total+=score; count++;}

	printf("평균 = %f\n", total/count);                  //총점/count값 = 평균
	fclose(fp);
	return 0;

}