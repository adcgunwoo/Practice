#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int i,a;

	int cnt = 0;

	for (i = 1; i <= 10; i++) {
		scanf("%d", &a);
		if (a % 2 == 0) {
			cnt++;
		}
	}
	printf("입력받은 짝수는 %d개입니다.", cnt);

	return 0;
}