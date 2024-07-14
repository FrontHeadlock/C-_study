#include <stdio.h>
#define SIZE 26

int main(void)
{
	int i;
	char codes[SIZE];

	for (i = 0; i < SIZE; i++)
		codes[i] = 'a' + i;			// ‘a'에 1을 더하면 ’b'가 된다. 

	for (i = 0; i < SIZE; i++)
		printf("%c ", codes[i]);
	printf("\n");

	return 0;
}
