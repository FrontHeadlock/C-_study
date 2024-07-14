#include <stdio.h>
#include <termios.h>
#include <unistd.h>

void set_input_mode(struct termios *saved_attributes) {
    struct termios tattr;

    // 현재 터미널 속성을 가져와서 저장
    tcgetattr(STDIN_FILENO, saved_attributes);

    // 새 터미널 속성을 설정
    tcgetattr(STDIN_FILENO, &tattr);
    tattr.c_lflag &= ~(ICANON | ECHO); // 캐논 모드와 에코 모드 끄기
    tattr.c_cc[VMIN] = 1; // 최소 1바이트 읽기
    tattr.c_cc[VTIME] = 0; // 읽기 타임아웃 설정하지 않음
    tcsetattr(STDIN_FILENO, TCSANOW, &tattr);
}

void reset_input_mode(struct termios *saved_attributes) {
    // 저장된 터미널 속성으로 복원
    tcsetattr(STDIN_FILENO, TCSANOW, saved_attributes);
}

int main(void) {
    struct termios saved_attributes;
    set_input_mode(&saved_attributes);

    int ch;
    while ((ch = getchar()) != 'q') {
        putchar(ch);
    }

    reset_input_mode(&saved_attributes);
    return 0;
}
