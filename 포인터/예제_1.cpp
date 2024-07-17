#include <stdio.h>

// 포인터 = 주소를 가지고 있는 변수 
// 포인터를 사용할 경우 직접적으로 메모리를 찾아가 변경 (C언어가 저수준 언어이기 때문)
// 초보자의 경우 포인터를 사용시 오히려 프로그램을 꼬이게 만들 수도 있다.
// &연산자는 변수의 주소를 반환하고 *연산자는 포인터가 가리키는 곳의 내용을 반환

/*
int main (){
    int i = 3000;
    int *p= &i;                 //변수와 주소 연결

    printf("&i = %u\n",&i);     //변수의 주소 출력
    printf("i = %d\n",i);       //변수의 값 출력

    printf("*p= %d\n",*p);      //포인터를 통한 간접참조 출력
    printf("p= %d\n",p);        //포인터의 값 출력

    return 0;
}


int main(){
    int i = 10;
    int *p;

    p=&i;
    printf("i = %d\n",i);

    *p=20;                  //int i = 20;
    printf("i = %d\n",i);   

    return 0;
}


// V = *p++      : p가 가리키는 값에 V대입후 p(주소값) 증가
// V = (*p)++    : p가 가리키는 값을 V대입후 가리키는 값(실제값) 증가
// V = *++p      : p(주소값)를 증가시킨 후 p가 가리키는 값을 v에 대입
// V = ++*p      : p가 가리키는 값을 가져온 후 그 값(실제값)을 증가하여 v에 대입한다.

int main(void)
{
	int i = 10;
	int *pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);
	(*pi)++;	
	printf("i = %d,  pi = %p\n", i, pi);        //실제값 i값 증가

	printf("i = %d,  pi = %p\n", i, pi);
	*pi++;	
	printf("i = %d,  pi = %p\n", i, pi);        //주소값 pi증가

	return 0;
}


int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("&a[0] = %u\n", &a[0]);      //a[0] 주소값
	printf("&a[1] = %u\n", &a[1]);      //4씩 증가(4바이트)
	printf("&a[2] = %u\n", &a[2]); 

	printf("a = %u\n", a);              //배열 a 주소값 = a[0]

	return 0;
}



int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int *p;

    //배열은 결국 포인터로 구현됨을 알 수 있다.
	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]);

    //포인터를 통하여 배열 원소를 변경할 수 있다.
	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d \n", p[0], p[1], p[2]);
	return 0;
}


#define SIZE 5
void print_image(int image[][SIZE])
{
	int r,c;
	for(r=0;r<SIZE;r++){
		for(c=0;c<SIZE;c++){
			printf("%03d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}
void brighten_image(int image[][SIZE])
{
	int r,c;
	int *p;
	p = &image[0][0];
	for(r=0;r<SIZE;r++){
		for(c=0;c<SIZE;c++){
			*p += 10;
			p++;
		}
	}
}
int main(void)
{
	int image[5][5] = {
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50},
		{ 10, 20, 30, 40, 50},		
		{ 10, 20, 30, 40, 50}};

	print_image(image);
	brighten_image(image);
	print_image(image);
	return 0;
}
*/

void print_reverse(int a[], int n);

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	print_reverse(a, 5);	
	return 0;
}

void print_reverse(int a[], int n)
{
	int *p = a + n - 1;		// 마지막 노드를 가리킨다.

	while(p >= a)			// 첫번째 노드까지 반복
		printf("%d\n", *p--);	// p가 가리키는 위치를 출력하고 감소
}
