#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int N;
struct data
{
	char name[20];
	int score, rank, cnt = 0;
}a[100], cpy[100],tmp;
void sort()
{
	int i, j;
	for (i = 0; i < N; i++) {
		cpy[i] = a[i];
	}
	for (i = 0; i < N - 1; i++) { //���� ������������ �����ϱ����� ��������
		for (j = i + 1; j < N; j++) {
			if (cpy[i].score < cpy[j].score) {
				tmp = cpy[i];
				cpy[i] = cpy[j];
				cpy[j] = tmp;
			}
		}
	}
	cpy[0].rank = 1; //������������ ���ĵ� ���� ���� ������ 1������ ����
	for (i = 1; i < N; i++) {
		if (cpy[i].score == cpy[i - 1].score) {
			cpy[i].rank = cpy[i - 1].rank;
		}
		else {
			cpy[i].rank = i + 1;
		}
	}
	for (i = 0; i < N; i++) { //�纻�� ����� ������ ����
		for (j = 0; j < N; j++) { //���߹ݺ������� ������ ������ �˻�
			if (a[i].score == cpy[j].score) {
				a[i].rank = cpy[j].rank;
			}
		}
	}
}
void output()
{
	int i, j;
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����

	fprintf(out, "Name Score Rank\n");

	for (i = 0; i < N; i++) {
		fprintf(out, "%4s %5d %4d\n", a[i].name, a[i].score, a[i].rank);
	}

	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.

}
int main()
{
	int i, j;
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����, 
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	for (N = 0; ; N++) {
		if (fscanf(in, "%s %d", a[N].name, &a[N].score) < 2) {//�Է¹��� �ڷ��� ������ ��ȯ�ϴµ�
			break;                                    //������ ������ 2�� �̸��� ��ȯ�ǹǷ� ����
		}
	}
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	sort();
	output();

	return 0;
}