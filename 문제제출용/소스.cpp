#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a[10],i;
    //�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	FILE *in, *out;  //������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	in = fopen("./temp/input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����, 
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	out = fopen("./temp/output.txt", "w"); //��� ���� ��Ʈ���� ���� 
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����
	
	
	for (i = 0; i < 10; i++) {
		fscanf(in, "%d", &a[i]);//in�� ����� ���Ϸκ��� �ڷḦ �Է¹���
	}

	for (i = 1; i < 10; i+=2) {
		printf("%d ", a[i]);
	}
	for (i = 1; i < 10; i+=2) { //�Է°� ����� ����,�Ȱ��� ���
		fprintf(out, "%d ", a[i]);
	}
	fclose(in); //�Լ��� ����ɶ� ��������
	fclose(out); //����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.

	return 0;
}