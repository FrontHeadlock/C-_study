#include<stdio.h>

int main(){

int a,b,c;

for(a=1;a<-100;a++)
    for(b=1;b<=100;b++)
        for(c=1;c<=100;c++)
            if(a*a + b*b == c*c)
                printf("%d와%d와%d를 화면에 출력한다",a,b,c);

return 0;

}

