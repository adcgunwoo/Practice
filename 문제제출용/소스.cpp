#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data //data �� ����ü �±׶�� �Ѵ�
{
	char name[20]; // ����ü�� ���ǵ� �� ������  
	int kor,eng;   // ���������� �Ѵ�.
};  //��⿡ ������ �� �ִٴ� �͵� ����ؾ���
struct data plus(struct data i,struct data r) // �� ����data ����ü���� �μ��� ���޹޾�
{                                             // data ����ü���� �����ϴ� �Լ��� �����Ѵ�.
	struct data sum;
	strcpy(sum.name, "�հ�");
	sum.kor = i.kor + r.kor;
	sum.eng = i.eng + r.eng;

	return sum; //�μ��� ���޹��� ����ü i�� r�� ����, ������ ���� 
}               //sum�� �ش� ����� �����Ѵ�.
int main()      //���ϵǴ� �ڷ����� �Լ��� �ڷ����� ���ƾ���
{                                    
	struct data lee,jun,hap; // �� ���� �̻��� ������ �̷��� ������ �� �ִ�.
	
	scanf("%s %d %d", lee.name, &lee.kor, &lee.eng);
	scanf("%s %d %d", jun.name, &jun.kor, &jun.eng);

	hap=plus(lee, jun); // �μ��� ����

	printf("%s %d %d\n", lee.name, lee.kor, lee.eng);
	printf("%s %d %d\n", jun.name, jun.kor, jun.eng);
	printf("%s %d %d\n", hap.name, hap.kor, hap.eng);
	
	return 0;
}