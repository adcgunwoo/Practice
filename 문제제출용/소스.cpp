#define _crt_no_secure_warnings
#include <stdio.h>
struct data //data �� ����ü �±׶�� �Ѵ�
{
	char name[20]; // ����ü�� ���ǵ� �� ������  
	int kor,eng;   // ���������� �Ѵ�.
};  //��⿡ ������ �� �ִٴ� �͵� ����ؾ���
int main() 
{                                    
	struct data lee,jun; // �� ���� ������ �̷��� ������ �� �ִ�.
	
	scanf("%s %d %d", lee.name, &lee.kor, &lee.eng);
	scanf("%s %d %d", jun.name, &jun.kor, &jun.eng);

	printf("%s %d %d\n", lee.name, lee.kor, lee.eng);
	printf("%s %d %d\n", jun.name, jun.kor, jun.eng);
	printf("�հ� %d %d", lee.kor + jun.kor, lee.eng + jun.eng);
	
	return 0;
}