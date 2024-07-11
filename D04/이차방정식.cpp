#include <stdio.h>
#include <math.h>
int main (){

    double a,b,c,r;
    double x;
    printf("a,b,c를 입력하세요 : ");
    scanf(" %lf %lf %lf",&a,&b,&c);

    if(a==0){
        r= -c/b;
        printf("방정식의 근은 : %f입니다.",r);}
    else{
        x = b*b - 4.0*a*c;
        if (x>=0){
            printf("방정식의 우근은 : %.5f입니다.\n",(-b+sqrt(x))/(2.0*a));
            printf("방정식의 좌근은 : %.5f입니다.",(-b-sqrt(x))/(2.0*a));
        }
        else
            printf("실근은 존재하지 않는다.");
        
    }
    return 0;
}