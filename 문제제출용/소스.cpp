#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data //����ü�� data ����
{
	double x, y;
};
void input(struct data &spt) //�Ű������� data ����ü�� ���޹޴´�.
{                            //������ ���� ���޹޾����Ƿ� ������ ������ ���� ���Ѵ�.
	printf("���� ��ǥ��?(x, y) ");
	scanf("%lf %lf", &spt.x, &spt.y);

}
struct data center(struct data a, struct data b) //�� ��ǥ�� ����ü�� ���޹���
{
	struct data cen; //����ü �������� cen�� ����
	cen.x = (a.x + b.x)/2;
	cen.y = (a.y + b.y)/2;

	return cen; //����� ����
}               //���ϰ��� ����ü data �̹Ƿ� �Լ��� ���� data�� �����ؾ���.
void output(struct data& p) 
{
	printf("�߽����� ��ġ = (%.1lf, %.1lf)", p.x, p.y); // ���
}
int main()
{
	struct data one, two, result; //����ü�� data ����
	input(one);
	input(two);
	result=center(one, two);
	output(result);
	
	return 0;
}