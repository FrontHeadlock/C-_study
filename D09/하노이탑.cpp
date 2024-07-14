#include <stdio.h>

void solveTowers(int n, char* _from, char* _to, char* _spare) {
    if (n > 0) {
        solveTowers(n - 1, _from, _spare, _to);
        printf("%d번 원반을 %s에서 %s로 옮김\n", n, _from, _to);
        solveTowers(n - 1, _spare, _to, _from);
    }
}

int main() {
    int n;
    printf("원반의 수를 입력하세요: ");
    scanf("%d", &n);
    solveTowers(n, "from", "to", "spare");
    return 0;
}

