#include<stdio.h>

//필드 폭 지정하여 읽기
/*int main(){
    int a,b;

    printf("6개의 숫자로 이루어진 정수를 입력하세요: ");
    scanf("%3d%3d", &a,&b);
    printf("입력된 정수는 %d, %d\n", a, b);

    return 0;
}

// 필드로 지정하여서 읽기
int main(void)
{
	int d, o, x;

	scanf("%d %o %x", &d, &o, &x);
	printf("d=%d o=%d x=%d\n", d, o, x);

    return 0;
}


int main(){
    char c;
    char s[80],t[80];

    printf("스페이스로 분리된 문자열을 입력하세요:");
    scanf("%s%c%s",s, &c, t);
    printf("입력된 첫번째 문자열 = %s\n",s);
    printf("입력된 문자 = %c\n",c);
    printf("입력된 두번째 문자열 =%s\n",t);

    return 0;
}


//문자 집합으로 읽기

int main(void)
{
	char s[80];

	printf("문자열을 입력하시오:");
	scanf("%[^abc]", s);

	printf("입력된 문자열=%s\n", s);

	return 0;
}
*/

//반환값 이용
int main(void)
{
	int x, y, z;
	if (scanf("%d%d%d", &x, &y, &z) == 3)
		printf("정수들의 합은 %d\n", x+y+z);
	else
		printf("입력값이 올바르지 않습니다.\n");
	return 0;
}
