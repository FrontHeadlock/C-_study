/*
가장 평점이 높은 학생을 찾아서 학생의 이름과 학번, 점수, 평균 점수를 화면에 출력한다.
학생들의 데이터는 Score.txt파일에서 읽어와야 하며, Score.txt파일은 사용자로부터 직접 입력받는다.

출력 예시)
학번을 입력하세요
이름을 입력하세요
학점을 입력하세요
<Score.txt>
20171111 홍길동 4.2
20171112 이순신 4.5
20171113 임꺽정 3.2

평점이 가장 높은 학생은 
202171112 이순신 4.5입니다
평균은 3.97입니다

--> 
출력 결과를 result.txt파일에 저장한다.
평점이 가장 낮은 학생도 출력한다
0점인 학생은 20171117 김학생 0과락입니다 라고 출력한다


*/


#include <stdio.h>

struct Student{
    int number;
    char name[100];
    float score;
};

int main(){

FILE *fp;
char fname[100];
int number,count =0;
char name[100];
float score,total = 0.0;
Student highest, lowest, zero;

fp=fopen("Score.txt","w");

printf("학번을 입력하세요: \n");
printf("이름을 입력하세요: \n");
printf("학점을 입력하세요: \n");

for(int i =0; i<3;i++){
    scanf("%d %s %f",&number,name,&score);
    fprintf(fp,"%d %s %f", &number,name,&score);
    }


    fp = fopen("result.txt", "w");
    fprintf(fp, "평점이 가장 높은 학생은 %d %s %.1f입니다.\n", highest.number, highest.name, highest.score);
    fprintf(fp, "평균은 %.2f입니다.\n", avg);
    fprintf(fp, "평점이 가장 낮은 학생은 %d %s %.1f입니다.\n", lowest.number, lowest.name, lowest.score);
    if (zero.score == 0.0) {
        fprintf(fp, "%d %s %.1f 과락입니다.\n", zero.number, zero.name, zero.score);
    }
    }

    fclose(fp);

    return 0;

}