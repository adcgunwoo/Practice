#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int score[3],sum;
}a[100];
int main()
{
	int n,i,j;
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	fscanf(in, "%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			fscanf(in, "%d", &a[i].score[j]);
			a[i].sum += a[i].score[j];
		}
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i].sum < a[j].sum) {
				int tmp = a[i].sum;
				a[i].sum = a[j].sum;
				a[j].sum = tmp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		fprintf(out, "%.1lf\n", a[i].sum / 3.0);
	}
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	return 0;
}