#define _crt_no_secure_warnings
#include <stdio.h>

int countLeapYears(int up_to) { // 1부터 입력받은 값 까지의 윤년의 개수
    return (up_to / 4) - (up_to / 100) + (up_to / 400);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    // 윤년 개수를 계산하는 방법
    int result = countLeapYears(a) - countLeapYears(b+1);

    printf("%d\n", result);

    return 0;
}