#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j,wcnt=0,wlen=0, tmp;
	char a[100],word[100][100];
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	fgets(a, 100, in);
	int len = strlen(a);
	for (i = 0; i < len; i++) {
		if (a[i] == ' ') {
			word[wcnt][wlen] = '\0';
			wcnt++;
			wlen = 0;
		}
		else {
			word[wcnt][wlen] = a[i];
			wlen++;
		}
	}
	word[wcnt][wlen] = '\0';
	wcnt++;
	tmp = strlen(word[0]);
	for (i = 0; i < wcnt; i++) {
		if (tmp < strlen(word[i])) {
			tmp = strlen(word[i]);
		}
	}
	fprintf(out, "%d\n", len);
	for (i = 0; i < wcnt; i++) {
		if (tmp == strlen(word[i])) {
			fprintf(out, "%s ", word[i]);
		}
	}
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	return 0;
}