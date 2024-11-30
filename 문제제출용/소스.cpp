#define _crt_no_secure_warnings
#include <stdio.h>
struct money  //money는 구조체 태그
{
	int number, won;   //입력받은 번호, 돈을 멤버변수로 선언
}arr[5],king;
struct money max(struct money arr[], int n)
{
	struct money maxdata = arr[0];  //구조체 지역변수를 선언 
	int i;            //반복문으로 들어가기전 초기값을 최대값으로 설정

	for (i = 1; i < n; i++) {  
		if (maxdata.won < arr[i].won) { 
			maxdata = arr[i];       //반복문을 돌려가며 최대값 구하기
		}
	}
	return maxdata;
}
int main()
{
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d번 저축금액은? ", i + 1);
		arr[i].number = i + 1;
		scanf("%d", &arr[i].won);
	}
	king = max(arr, 5);
	printf("저축왕 %d번 %d원", king.number, king.won);

	return 0;
}