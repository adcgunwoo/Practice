#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a, b,result=0,i;
    //�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	FILE *in, *out;  //������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����, 
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ���� 
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����
	
	fscanf(in, "%d %d", &a,&b);//in�� ����� ���Ϸκ��� �ڷḦ �Է¹���
	for (i = a; i <= b; i++) {
		result+=i;
	}

	printf("%d\n", result);
	fprintf(out, "%d", result); //�Է°� ����� ����,�Ȱ��� ���
	
	fclose(in); //�Լ��� ����ɶ� ��������
	fclose(out); //����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.

	return 0;
}