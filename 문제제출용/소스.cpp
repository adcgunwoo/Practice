#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,a;

	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	fscanf(in, "%d", &a);
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= 2*(a-i); j++) {
			fprintf(out, " ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			fprintf(out, "* ");
		}
		fprintf(out, "\n");
	}
	for (i = 1; i <= a-1; i++) {
		for (j = 1; j <= i*2; j++) {
			fprintf(out, " ");
		}
		for (j = 1; j <= 2*(a-i)-1; j++) {
			fprintf(out, "* ");
		}
		fprintf(out, "\n");
	}
	
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	return 0;
}