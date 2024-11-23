#define _crt_no_secure_warnings
#include <stdio.h>
void input(int x[])
{
	for (int i = 0; i < 6; i++) {
		scanf("%d", &x[i]);
	}
}
void swap(int x[])
{
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (x[i] > x[j]) {
				int tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
			}
		}
	}
}
void output(int x[])
{
	for (int i = 0; i < 6; i++) {
		printf("%d ", x[i]);
	}
}
int main()
{
	int a[6];
	input(a);
	swap(a);
	output(a);
	return 0;
}