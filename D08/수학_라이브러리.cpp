#include <math.h> 
#include <stdio.h> 

int main( void ) 
{ 
double pi = 3.1415926535; 
double x, y; 

x = pi / 2; 
y = sin( x ); 
printf( "sin( %.4f ) = %.4f\n", x, y ); 
y = sinh( x ); 
printf( "sinh( %.4f ) = %.4f\n",x, y ); 
y = cos( x ); 
printf( "cos( %.4f ) = %.4f\n", x, y ); 
y = cosh( x ); 
printf( "cosh( %.4f ) = %.4f\n",x, y ); 

} 


