#define _crt_no_secure_warnings
#include <stdio.h>
struct data //data ��� �̸��� ���ο� ����ü�� ����.
{           //data�� ����ü �±׶�� �Ѵ�.
	char name[20];  
	int age;      //name�� age�� ���������� �Ѵ�.
}; // ; ����
int main()
{  //c++������ �׳� data self; �� ������ �� �ִ�.
	struct data self;             //self��� �̸��� ������ ���� 
	printf("����� �̸��� �����Դϱ�? ");
	scanf("%s", self.name);
	printf("����� ���̴� �� ���Դϱ�? ");
	scanf("%d", &self.age);
	printf("����� �̸��� %s�̰� ���̴� %d���̱���.", self.name, self.age);
	
	return 0; //���� ���, �ؾ ��踦 �ϳ� ������ٰ� ����. 
}             //������ �̸��� data��� �Ѵٸ�, name�� age�� �ϰ� �а����� �� �� �ִ�.