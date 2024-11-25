#define _crt_no_secure_warnings
#include <stdio.h>

int N, a[101];

void output() {
	for (int i = 1; i <= N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void dice(int step, int start) {
	if (step > N) {
		output();
		return;
	}

	for (int i = start; i <= 6; i++) {  // start�� �̿��� �ߺ��� ����
		a[step] = i;
		dice(step + 1, i);  // ��� ȣ��, i�� start�� �����Ͽ� �ߺ� ����
	}
}

int main() {
	scanf("%d", &N);
	dice(1, 1);  // ù ��° ������, 1���� ����
	return 0;
}
