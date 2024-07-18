/*문자열 강의자료에서 우리는 암호화를 시키는 encrypt 함수를 작성해보았습니다
다시 암호를 복호화시키는 decrypt함수를 작성해보세요.
조건) 입력값을 그대로 printf로 재출력하는 것이 아니라 복호화 함수를 작성 후 이를 거쳐
이를 재출력하는 것입니다.

예시) 문자열을 입력하세요: meet
암호화된 문자열 : phhw
복호화된 문자열 : meet
*/
#include <stdio.h>

int encrypt(const char* str1);
int decrypt(const char* str2);

int main(){
    char str1[100],str2[100];
    printf("문자열을 입력하세요: ");
    scanf("%c",str1);

    printf("암호화된 문자열: ");

    printf("복호화된 문자열: ");

    return 0;
}
int encrypt(const char* str1){
    

}
