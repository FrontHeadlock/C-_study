#include <stdio.h>

struct Student{
    int number;
    char name[100];
    float score;
};

int main() {
    FILE *fp;
    char fname[100];
    int number, count = 0;
    char name[100];
    float score, total = 0.0;
    Student highest, lowest, zero;
    int first = 1;


    fp = fopen("Score.txt", "w");

    


    while (fscanf(fp, "%d %s %f", &number, name, &score) != EOF) {
        if (first) {
            highest.number = lowest.number = zero.number = number;
            strcpy(highest.name, name);
            strcpy(lowest.name, name);
            strcpy(zero.name, name);
            highest.score = lowest.score = zero.score = score;
            first = 0;
        } else {
            if (score > highest.score) {
                highest.number = number;
                strcpy(highest.name, name);
                highest.score = score;
            }
            if (score < lowest.score) {
                lowest.number = number;
                strcpy(lowest.name, name);
                lowest.score = score;
            }
            if (score == 0.0) {
                zero.number = number;
                strcpy(zero.name, name);
                zero.score = score;
            }
        }
        total += score;
        count++;
    }
    fclose(fp);

    float average = total / count;

    printf("평점이 가장 높은 학생은 %d %s %.1f입니다.\n", highest.number, highest.name, highest.score);
    printf("평균은 %.2f입니다.\n", average);
    printf("평점이 가장 낮은 학생은 %d %s %.1f입니다.\n", lowest.number, lowest.name, lowest.score);
    if (zero.score == 0.0) {
        printf("%d %s %.1f 과락입니다.\n", zero.number, zero.name, zero.score);
    }

    fp = fopen("result.txt", "w");
    fprintf(fp, "평점이 가장 높은 학생은 %d %s %.1f입니다.\n", highest.number, highest.name, highest.score);
    fprintf(fp, "평균은 %.2f입니다.\n", average);
    fprintf(fp, "평점이 가장 낮은 학생은 %d %s %.1f입니다.\n", lowest.number, lowest.name, lowest.score);
    if (zero.score == 0.0) {
        fprintf(fp, "%d %s %.1f 과락입니다.\n", zero.number, zero.name, zero.score);
    }
    fclose(fp);

    return 0;
}
