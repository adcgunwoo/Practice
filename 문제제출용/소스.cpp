#define _crt_no_secure_warnings
#include <stdio.h>
//#include <math.h>
int N, a[101]; //���������� �� ������� ������, �μ��� �ְ�ޱ� ��ٷο� �����̱⿡ ����
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
	if (step > N) { // ���� �ֻ����� �Էµ� ���� �����ϸ�, ������� �Ѿ.
		output();
		return;
	}
	for (i = 1; i <= 6; i++) {
		a[step] = i; // ���� ���, a[1]�̸� ù��° �ֻ����� ������ ���̴�.
		dice(step + 1); // ù��° �ֻ����� ��������, �� ���� �ֻ����� ������ ���̴�.
	}
}
int main()
{
	scanf("%d", &N); //��� �ֻ����� ���� ������ �Է�
	dice(1);
	return 0;
}

