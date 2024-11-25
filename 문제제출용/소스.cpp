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

	for (int i = start; i <= 6; i++) {  // start를 이용해 중복을 방지
		a[step] = i;
		dice(step + 1, i);  // 재귀 호출, i로 start를 설정하여 중복 방지
	}
}

int main() {
	scanf("%d", &N);
	dice(1, 1);  // 첫 번째 던지기, 1부터 시작
	return 0;
}
