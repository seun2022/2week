#include <stdio.h>

int main() {
 
    // ���ڿ� ���
    printf("202207011\n");
    printf("���������\n");
    printf("Application\n");
    char c;

    // esc ������ ����
    while (1) {
        printf("command> ");

            c = _getch();
        // esc Ű��� ����
        if (c == 27) {
            return 0;
        }

        // ��ɾ� ó��
        switch (c) {
        case 'p':
            printf("p\n���� ������ �̳� ���ϴ� �л��̴�\n");
            break;
        case 'f':
            printf("f\n���� ������ �ʹ� ��̴�\n");
            break;
        case 'j':
            printf("j\n������ ���� �� ���ּ���\n");
            break;
        default:
            printf("�߸��� ����Դϴ�.\n");
            break;
        }
    }

    return 0;
}
