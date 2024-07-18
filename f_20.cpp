#include <stdio.h>
//평점이 높은 학생을 찾는 코드
//최대 평점의 학생을 찾는 부분을 get_max_stu()로 독립시켜 프로그램 재작성

struct student {
    int number;
    char name[20];
    double grade;
};

struct student list[]={
    {20120001,"홍길동", 4.2},
    {20120002,"김철수", 3.2},
    {20120003,"김영희", 3.9}
};

int get_max_stu(int);

int main(){
    struct student super_stu;
    int i,size;
    size = sizeof(list)/sizeof(list[0]);
    super_stu = list[0];


    for(i=1;i<size;i++){
        if(list[i].grade>super_stu.grade)
        super_stu = list[i];
    }


    printf("평점이 가장 좊은 학생은 (이름%s, 학번%s, 평점%f)입니다\n",
    super_stu.name,super_stu.number,super_stu.grade);

    return 0;
}

int get_max_stu(int){
    

}