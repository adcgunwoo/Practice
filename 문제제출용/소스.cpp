#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j;
	char a[101];
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	fgets(a, 101, in); //in �ڸ��� â���� �Է¹����� stdin������, ���Ͽ��� �Է��� �����Ƿ�
	                   //in�� �� �ڸ��� ����.
	int len = strlen(a);
	while (a[len - 1] == '\r' || a[len - 1] == '\n') { 
		a[--len] = '\0'; //���͵� ��ٲ� ���ڰ� ������ �ΰ����� �ٲ��ְ�, ���̸� �Ѱ� �ٿ��ش�.
	}
	
	for (i = 0; i < len; i++) {
		if (a[i] == ' ') {
			fprintf(out, "\n");
		}
		else {
			fprintf(out, "%c", a[i]);
		}
	}
	
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	

	return 0;
}