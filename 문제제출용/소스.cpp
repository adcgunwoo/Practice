#define _crt_no_secure_warnings
#include <stdio.h>

int countLeapYears(int up_to) { // 1���� �Է¹��� �� ������ ������ ����
    return (up_to / 4) - (up_to / 100) + (up_to / 400);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // ���� ������ ����ϴ� ���
    int result = countLeapYears(a) - countLeapYears(b+1);

    printf("%d\n", result);

    return 0;
}