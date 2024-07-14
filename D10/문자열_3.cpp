#include <stdio.h>

/*
int main(){
    char src[]="The Worst things to eat before you sleep";
    char dst[100];
    int i;
    printf("원본 문자열 = %s\n",src);
    for(i=0;src[i]!=NULL;i++)
        dst[i]=src[i];
    dst[i]=NULL;
    printf("복사된 문자열 = %s\n",dst);
    return 0;
}

int main (void){
    char str[30]="C language is easy";
    int i =0;
    while (str[i]!=0)
        i++;
    printf("문자열 \"%s\"의 길이는 %d입니다.",str,i);

    return 0;
}

int main(void)
{
	int ch;		// 정수형에 주의
	while( (ch = getchar()) != EOF )
		putchar(ch);	
	return 0;
}

//conio.h는 맥에서 동작 X

int main(void)
{
	int ch;
	while( (ch = _getch()) != 'q' )
		_putch(ch);
	return 0;
}


int main(void)
{
	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	gets(name);
	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address);
	puts(name);
	puts(address);
	return 0;
}

#include<ctype.h>
int main(){
    int c;

    while((c=getchar())!=EOF)       //c를 입력받고 EOF ctrl D 입력시 탈출
    {
        if(islower(c))              //만약 문자열 c가 소문자면
            c=(toupper(c));         //대문자로 변환
        putchar(c);                 //출력

    }
    return 0;
}

int main(){
    int c;

    while((c=getchar()!='z')){
        printf("------------------------\n");
	   	printf("isdigit(%c) = %d\n", c, isdigit(c));
		printf("isalpha(%c) = %d\n", c, isalpha(c));
		printf("islower(%c) = %d\n", c, islower(c));
		printf("ispunct(%c) = %d\n", c, ispunct(c));
		printf("isxdigit(%c) = %d\n", c, isxdigit(c));
		printf("isprint(%c) = %d\n", c, isprint(c));
		printf("------------------------\n\n");

    }
    return 0;
}
#include <string.h>

int main( void )
{
	char string[80];

	strcpy( string, "Hello world from " );
	strcat( string, "strcpy " );           
	strcat( string, "and " );              
	strcat( string, "strcat!" );          
	printf( "string = %s\n", string );

    int k = strlen(string);
    printf("%d\n",k);

	return 0;
}

int main (){
    char s1[30];
    char s2[30];
    int result;

    printf("첫 번째 단어를 입력하세요:");
    scanf("%s",&s1);
    printf("두 번째 단어를 입력하세요:");
    scanf("%s",&s2);

    result =strcmp(s1,s2);
    if(result<0)
        printf("%s가 %s보다 앞에 있읍니다.\n",s1,s2);
    else if(result==0)
        printf("%s가 %s와 같읍니다.\n",s1,s2);
    else
        printf("%s가 %s보다 뒤에 있읍니다.\n",s1,s2);

    return 0;
}


int main(){
    char s1[]="The Catholic Univ of korea At Catholic.ac.kr";
    char *ptr = strchr(s1,'a');      //s1문자열에서 a로 시작하는 부분을 검색(ptr은 첫번째 a로 시작하는 문자열 주소)

    while (ptr!=NULL)                //ptr은 null이 아닐때까지 수행
    {
        printf("%s\n",ptr);          //ptr출력
        ptr = strchr(ptr+1,'a');     //ptr+1로 a 다음 문자부터 검색후 a를 찾는다
    }
    return 0;
}

int main()
{
   char s1[30] = "The catholic univ. korea";    
   char *ptr = strstr(s1, "univ");      //s1문자열에서 univ를 찾아서 이후 문자열을 ptr에 저장
   printf("%s\n", ptr);                 //저장했던 ptr을 불러와 출력

    return 0;
}
char s[] = "Man is immortal, because he has a soul";    //s문자열
char seps[]   = " ,\t\n";                               //공백,쉼표,수평탭,탭으로 분리
char *token;                                            //포인터변수 선언

int main( void )
{
	 
	token = strtok( s, seps );              //s문자열을 seps에 따라 토큰으로 분리
	while( token != NULL )                  //토큰이 NULL이 아닐때까지 실행
	{ 
	      printf( "토큰: %s\n", token );     //토큰 출력
	      token = strtok( NULL, seps );     //첫번째 인자로 NULL전달, 중단된 위치부터 계속 분리작업 실행 
   	}	
}


int main(){
    char s1[]="100 200 300";
    char s2[30];
    int val;

    sscanf(s1,"%d",&val);   //s1의 문자열에서 정수값을 추출해 val에 100을 저장한다
    printf("%d\n",val);     //val에 저장한 값을 출력한다
    sprintf(s2,"%d",val);   //val에 저장된 정수 100을 문자열로 변환해 s2에 저장
    printf("%s\n",s2);      //문자열 100 출력
    
    return 0;
    }


int main(void)
{
	char filename[100];              //filename 문자열
	char s[100];                    
	int i;
	for(i=0; i < 6; i++){            //6번 반복
		strcpy(filename, "image");   //image를 filename에 복사
		sprintf(s, "%d", i);         //정수 i를 문자열로 변환해 s에 저장
		strcat(filename, s);         //filename과 s를 연결
		strcat(filename, ".jpg");    //iamge + i + .jpg 연결
		printf("%s \n", filename);   //filename 출력
	}
	return 0;
}

#include <stdlib.h>

int main( void )
{
	char s1[] = "100";                      //문자열 s1 = 100
	char s2[] = "12.93";                    //문자열 s2 = 12.93
	char buffer[100];                       //문자열 buffer
	int i;
	double d, result;

	i = atoi(s1);                           //s1을 정수로 변환해 i에 저장
	d = atof(s2);                           //s2를 실수로 변환해 d에 저장
	result = i + d;                         //result = i+d

	sprintf(buffer, "%f", result);          //실수 result를 문자열로 변환해 buffer문자열에 저장
	printf("연산 결과는 %.8s입니다.\n", buffer);  //buffer문자열을 출력

	return 0;
}
*/


int main( void )
{
	int i;
	char fruits[3][20];
	for(i = 0; i < 3; i++) {
		printf("과일 이름을 입력하시오: ", fruits[i]);  //포인터는 배열을 쉽게 다루기 위해서 (문자열 배열은 그 자체가 메모리 주소값을 가리킨다)
                                                  //그래서 배열의 이름은 그자체가 주소값이기 때문에 변수와 달리 &사용할 필요가 없다.
		scanf("%s", fruits[i]);
	}
	for(i = 0; i < 3; i++)
		printf("%d번째 과일: %s\n", i, fruits[i]);
	return 0;
}
