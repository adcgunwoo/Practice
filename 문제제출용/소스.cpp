#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int a, b;
}n[100];
int main()
{
	int i,cnt=0,j;
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	

	while (1) {
		if (fscanf(in, "%d %d", &n[cnt].a, &n[cnt].b) < 2) { //���ǹ�ó�� �������� �Է� �ް� �ִ°���
			break;
		}
		cnt++;
	}

	for (j = 0; j < cnt; j++) {
		fprintf(out, "�غ� = %d, ���� = %d, ���� = %.1lf\n", n[j].a, n[j].b, n[j].a * n[j].b / 2.0);
	}


	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.


	return 0;
}