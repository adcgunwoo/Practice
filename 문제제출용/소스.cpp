#define _crt_no_secure_warnings
#include <stdio.h>
struct money  //money�� ����ü �±�
{
	int number, won;   //�Է¹��� ��ȣ, ���� ��������� ����
}arr[5],king;
struct money max(struct money arr[], int n)
{
	struct money maxdata = arr[0];  //����ü ���������� ���� 
	int i;            //�ݺ������� ������ �ʱⰪ�� �ִ밪���� ����

	for (i = 1; i < n; i++) {  
		if (maxdata.won < arr[i].won) { 
			maxdata = arr[i];       //�ݺ����� �������� �ִ밪 ���ϱ�
		}
	}
	return maxdata;
}
int main()
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d�� ����ݾ���? ", i + 1);
		arr[i].number = i + 1;
		scanf("%d", &arr[i].won);
	}
	king = max(arr, 5);
	printf("����� %d�� %d��", king.number, king.won);

	return 0;
}