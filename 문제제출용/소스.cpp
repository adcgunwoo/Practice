#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	char word[10][100],n,tmp[100];
	int i,j,len[10];
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	for (i = 0; i < 10; i++) {
		fscanf(in, "%s", word[i]);
		len[i] = strlen(word[i]);
	}
	fscanf(in, " %c", &n);
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (strcmp(word[i], word[j]) > 0) {
				strcpy(tmp, word[i]);
				strcpy(word[i], word[j]);
				strcpy(word[j], tmp);
			}
		}
	}
	for (i = 0; i < 10; i++) {
		if (strchr(word[i], n)) {
			fprintf(out, "%s\n", word[i]);
		}
	}
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	return 0;
}