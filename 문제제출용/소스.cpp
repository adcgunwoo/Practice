#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	char a[101];
}tmp[101];
int main()
{
	int i,n;
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	
	fscanf(in, "%d ", &n);
	for (i = 0; i < n; i++) {
		fgets(tmp[i].a, 101, in);
		int len = strlen(tmp[i].a);
		if (tmp[i].a[len - 1] == '\r' || tmp[i].a[len - 1] == '\n') {
			tmp[i].a[--len] = '\0';
		}
	}
	for (i = n - 1; i >= 0; i--) {
		fprintf(out,"%s\n",tmp[i].a);
	}

	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	

	return 0;
}