#define _crt_no_secure_warnings
#include <stdio.h>
void input(int &x, int &y)
{
	scanf("%d %d", &x, &y);
}
void sort1(int *x, int *y) //�Ű������� �����ͷ� ������ �ּҸ� ���޹޾� �����Ѵ�.
{                          //�����ʹ� �ּҸ� ������ �� �����Ƿ� �� �Լ��� ȣ���ϱ� ����
	int tmp;               //�ݵ�� �ּҸ� �����ؾ��ϸ� �Ϲ����� ���� ������ �� ����.
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void sort2(int *q, int w)  //�迭�� ������ ��, �迭�� ������ ���������,
{                          //������ ������ ������ �ڿ� []�� �ۼ��ϸ� �ȵ�.
	int i, j;
	for (i = 0; i < w - 1; i++) {
		for (j = i + 1; j < w; j++) {
			if (q[i] > q[j]) {
				int tmp = q[i];
				q[i] = q[j];
				q[j] = tmp;
			}
		}
	}
}
void output(int n, int m, int z[], int h)
{
	int i;
	printf("%d %d\n", n, m);
	for (i = 0; i < h; i++) {
		printf("%d ", z[i]);
	}
}
int main()
{
	int a, b,arr[5]={1,3,9,4,2};
	input(a, b);
	sort1(&a, &b); //�����ʹ� �ּҷθ� ������ �� �����Ƿ�, �ּҷ� ����
	sort2(arr, 5); //�Ű������� �޴� ���� ������ ������ �޾Ҵµ�, �μ��� �����ϴ� ���� �����
	output(a, b, arr, 5);
	return 0;
}