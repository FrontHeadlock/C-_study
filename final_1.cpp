#include <stdio.h>

int mystrcmp(const char* str1, const char* str2);

int main() {
    char str1[30], str2[30];

    printf("첫번째 단어를 입력하시오 : ");
    scanf("%s", str1);
    printf("두번째 단어를 입력하시오 : ");
    scanf("%s", str2);

    int result = mystrcmp(str1, str2);

    
    if (result < 0) {
        printf("%s이 %s보다 앞에 있습니다.\n", str1, str2);
    } else if (result > 0) {
        printf("%s이 %s보다 뒤에 있습니다.\n", str1, str2);
    } else {
        printf("%s와 %s이 같습니다.\n", str1, str2);
    }

    return 0;
}

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}