#define _crt_no_secure_warnings
#include <stdio.h>
struct data
{
	char name[10];
	int age;
}buddy; //����ü ���ǿ� ���ÿ� ������ �����ϴ� ������� 
int main() // struct data buddy; �� ����.
{                                    
	                                //����ü�� ���� self�� �����ϰ� �̸��� ���̸� �ʱ�ȭ
	struct data self={"�տ���",12}; //����ü�� ���ǵ� ������� ��������� ���Եȴ�.
	printf("ģ�� ģ���� �̸��� ���̸� �Է��ϼ���. ");
	scanf("%s %d", &buddy.name, &buddy.age);
	printf("����� �̸� : %s, ���� : %d\n", self.name, self.age);
	printf("ģ���� �̸� : %s, ���� : %d", buddy.name, buddy.age);
	return 0;
}