#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{
	int i,a[1000],cnt=0,cnt_=0;

	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	
	for (i = 0; i < 1000; i++) {
		fscanf(in,"%d", &a[i]);
		if (a[i] == 0) {
			break;
		}
		cnt++;
	}
	for (i = 0; i < cnt; i++) {
		if (a[i] % 15 == 0) {
			fprintf(out, "%d ", a[i]);
			cnt_++;
		}
	}
	
	fprintf(out, "\n%d", cnt_);
	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	return 0;
}