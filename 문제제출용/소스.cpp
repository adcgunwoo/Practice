#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int sum, kor, eng;
	double avg;
	char name[100];
    //�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	FILE *in, *out;  //������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����, 
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ���� 
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����
	
	fscanf(in, "%s %d %d", name, &kor, &eng);//in�� ����� ���Ϸκ��� �ڷḦ �Է¹���
	sum = kor + eng;
	avg = (kor + eng) / 2.0;

	printf("%s %d %.1lf\n", name, sum, avg);
	fprintf(out, "%s %d %.1lf\n", name, sum, avg); //�Է°� ����� ����,�Ȱ��� ���
	
	fclose(in); //�Լ��� ����ɶ� ��������
	fclose(out); //����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.

	return 0;
}