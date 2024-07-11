#include <stdio.h>

int main(void)
{
	int i = 5;
	long factorial = 1;

	while (i >= 1)
	{
		factorial *= i;
		i--;
	}
	printf("%ld \n", factorial);

	return 0;
}
