#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int age;
	char name[20],arr[200];
}tmp[10];
int main()
{
	int i,n;
	//�Ʒ����� ���� ����� ��Ʈ���� �����ϱ� ���� ���������͸� ����
	//������ ������ �̸��� �� ��Ʈ���� �̸��� �ȴ�.
	FILE* in = fopen("input.txt", "r"); //�Է� ���Ͻ�Ʈ���� ����
	FILE* out = fopen("output.txt", "w"); //��� ���� ��Ʈ���� ����
	//input.txt�� �б� �������� �����ϰ�, in�̶�� ��Ʈ���� �̿��� ����
	//output.txt�� ��� �������� �����ϰ�, out�̶�� ��Ʈ���� �̿��Ͽ� ����	
	
	fscanf(in, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(in, "%s %d\n", tmp[i].name, &tmp[i].age); //age�� �Է¹����� 15�� ����ǰ� Ŀ���� 15 ������ ��ġ�ϰ� �ȴ�.
		fgets(tmp[i].arr, 200, in);                      //������ fgets�� �����ϸ� Ŀ���� ��ġ�� �����κ��� 
	}                                                    //�� ���� ���������� �Է¹ް� �Ǵµ� �� ���� �ڴ� �ƹ��͵� ���⿡ �Է��� ���޴´�.
	for (i = 0; i < n; i++) {                            //���� ���� ���� ������ �Է¹������� Ŀ���� ��ġ�� ���������� �̵���Ű�� ����
		fprintf(out, "�̸� : %s\n", tmp[i].name);        //fscanf ���� \n�� �ٿ��ش�.
		fprintf(out, "���� : %d��\n", tmp[i].age);
		fprintf(out, "������� : %s\n", tmp[i].arr);
	}
	for (i = 0; i < n; i++) {
		printf("�̸� : %s\n", tmp[i].name);
		printf("���� : %d��\n", tmp[i].age);
		printf("������� : %s\n", tmp[i].arr);
	}

	fclose(in); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	fclose(out); //�Լ��� ����ɶ� �������� ����ġ �ʰ� �ߴܵɶ��� ����� �ۼ��ؾ���.
	

	return 0;
}