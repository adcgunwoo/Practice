#define _crt_no_secure_warnings
#include <stdio.h>
#include <math.h>
struct data
{
	int a, b, c,sum;
	char name[20];
}arr[12];
void input(struct data q[],int w)
{
	int i;
	for (i = 0; i < w; i++) {	
		scanf("%s %d %d %d", arr[i].name, &arr[i].a, &arr[i].b, &arr[i].c);
		arr[i].sum = arr[i].a + arr[i].b + arr[i].c;
	}	
}
void sort(struct data n[], int m)
{
	int i, j;
	for (i = 0; i < m - 1; i++) {
		for (j = i + 1; j < m; j++) {
			if (arr[i].sum < arr[j].sum) {
				struct data tmp = arr[i]; //���� �κ�
				arr[i] = arr[j];   //��������� ������ �ִ� �� �ƴѵ�
				arr[j] = tmp;       //'=' ǥ�÷� ���Ը� ���൵ ���簡 �ȴ�.
			}
		}
	}
}
void output(struct data g[], int h)
{
	int i;
	for (i = 0; i < h; i++) {
		printf("%s %d %d %d %d\n", arr[i].name, arr[i].a, arr[i].b, arr[i].c, arr[i].sum);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	input(arr,n);
	sort(arr, n);
	output(arr, n);
	return 0;
}