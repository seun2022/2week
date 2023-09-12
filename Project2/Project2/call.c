#include <stdio.h>

int main() {
 
    // 문자열 출력
    printf("202207011\n");
    printf("정세운님의\n");
    printf("Application\n");
    char c;

    // esc 누르면 종료
    while (1) {
        printf("command> ");

            c = _getch();
        // esc 키라면 종료
        if (c == 27) {
            return 0;
        }

        // 명령어 처리
        switch (c) {
        case 'p':
            printf("p\n나는 과제를 겁나 절하는 학생이다\n");
            break;
        case 'f':
            printf("f\n나는 과제가 너무 즐겁다\n");
            break;
        case 'j':
            printf("j\n교수님 과제 더 내주세요\n");
            break;
        default:
            printf("잘못된 명령입니다.\n");
            break;
        }
    }

    return 0;
}
