#include <stdio.h> 

int main(void) 
{ 
int x = 10, y = 10, z = 33;
printf("x = %d y = %d \n", x, y);
x += 1;     // x =11
printf("(x += 1)이후 x = %d \n", x); 
y *= 2;     // y = 20
printf("(y *= 2)이후 y = %d \n", y);
z %= x + y; // z = 33%31 = 2
printf("z = %d \n", z); 
return 0; 
}