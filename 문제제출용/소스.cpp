#define _crt_no_secure_warnings
#include <stdio.h>
struct data
{
	int x[2], y[2];
}f[2],s[2],result_f[2],result_s[2];
void input(struct data n[],struct data m[])
{
	int i;
	for (i = 0; i < 2; i++) {
		scanf("%d %d %d %d", &n[i].x[i], &n[i].y[i], &m[i].x[i], &m[i].y[i]);
	}
}
void sort(struct data q[],struct data w[])
{
	int i, j;
	for (i = 0; i < 1; i++) { //검사, 다른 답들과 비교하기
		for (j = i + 1; j < 2; j++) {
			if (q[i].x[i] > q[j].x[j]) {
				result_f[i].x[i] = q[j].x[j];
			}
			else result_f[i].x[i] = q[i].x[i];
			if (q[i].y[i] < q[j].y[j]) {
				result_f[i].y[i] = q[i].y[i];
			}
			else result_f[i].y[i] = q[j].y[j];
			if (w[i].x[i] < w[j].x[j]) {
				result_s[i].x[i] = w[j].x[j];
			}
			else result_s[i].x[i] = w[i].x[i];
			if (w[i].y[i] > w[j].y[j]) {
				result_s[i].y[i] = w[i].y[i];
			}
			else result_s[i].y[i] = w[j].y[j];
		}
	}
}
void output(struct data h[], struct data j[])
{
	printf("%d %d %d %d", result_f[0].x[0], result_f[0].y[0], result_s[0].x[0], result_s[0].y[0]);
}
int main()
{
	input(f, s);
	sort(f, s);
	output(f, s);
	return 0;
}