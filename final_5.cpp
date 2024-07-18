#include <stdio.h>

int square(int a);
int cube(int a);

int main() {
    int a, i;
    FILE *fp;
    int line_num = 0;

    fp = fopen("number.txt", "r");

    for (line_num = 0; line_num < 5; line_num++) {
        if (fscanf(fp, "%d", &a) != 1) {
            fprintf(stderr, "파일 읽기 오류\n");
            fclose(fp);
            return 1;
        }
        square(a);
        cube(a);
    }
    fclose(fp);
    return 0;
}

int square(int a) {
    int k = a * a;
    printf("%d ", k);
    return k;
}

int cube(int a) {
    int j = a * a * a;
    printf("%d\n", j);
    return j;
}
