#define _crt_no_secure_warnings
#include <stdio.h>
//#include <math.h>
int N, a[101]; //전역변수를 잘 사용하지 않지만, 인수로 주고받기 까다로운 문제이기에 선언
void output()
{
	for (int i = 1; i <= N; i++) {
		printf("%d ", a[i]); 
	}
	printf("\n");
}
void dice(int step)
{
	int i;
	if (step > N) { // 던진 주사위가 입력된 값에 만족하면, 출력으로 넘어감.
		output();
		return;
	}
	for (i = 1; i <= 6; i++) {
		a[step] = i; // 예를 들어, a[1]이면 첫번째 주사위를 던지는 것이다.
		dice(step + 1); // 첫번째 주사위를 던졌으니, 그 다음 주사위를 던지는 것이다.
	}
}
int main()
{
	scanf("%d", &N); //몇개의 주사위를 던질 것인지 입력
	dice(1);
	return 0;
}

