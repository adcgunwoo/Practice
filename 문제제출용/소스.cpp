#define _crt_no_secure_warnings
#include <stdio.h>
#define swap(x,y) {int z=x; x=y; y=z;}
void input(int x[], int y)
{
	for (int i = 0; i < y; i++) {
		scanf("%d", &x[i]);
	}
}
void output(int x[], int y)
{
	for (int i = 0; i < y; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
}
void sort(int x[], int y)
{
	for (int i = 1; i < y; i++) {
		for (int j = 0; j < y - i; j++) {
			if (x[j] < x[j+1]) {
				swap(x[j], x[j + 1]);		
			}
		}
		output(x, y);
	}
}
int main()
{
	int a[10];
	input(a, 10);
	sort(a, 10);

	return 0;
}