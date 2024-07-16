#include<stdio.h>

int main(){
    double a,result;                //a와 결과값을 double로 선언    
    int b,i;                        //b와 i값은 int로 선언

    printf("실수의 값을 입력하라: ");    //실수값을 입력받고
    scanf("%lf",&a);                //a에 저장한다
    printf("거듭제곱 횟수를 입력하라: ");
    scanf("%d",&b);
    result =1.0;                    //result=1.0으로 초기화한다(곱셉)
    i=0;                            //i값은 0으로 초기화

    while(i<b){                     //i가 b보다 낮은 동안 실행
        result*=a;                  //result값에 a를 곱한다
        i++;                        //i는 한개씩 증가한다
    }
    printf("결과값은 %f입니다 ",result);  //결과값으로 result를 출력한다

}

//분할정복으로 풀어보기

/*int a,b,c;

int GetSome(int b){
    if(b==1){
        return a%c;
    }
    int halfpower = GetSome(b/2);
    if(b%2==1){
        return(halfpower*halfpower%c)*a%c;
    }else{
        return halfpower*halfpower%c;
    }
}

int main(){
    printf("a,b,c값을 입력하라: ");
    scanf("%d %d %d", &a,&b,&c);

    int result = GetSome(b);
    printf("결과값은 %d입니다.\n",result);

    return 0;
}*/