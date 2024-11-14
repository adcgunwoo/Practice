#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int a;
	printf("점수를 입력하세요. ");
	scanf("%d", &a);

	switch (a / 10) 
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
	
	return 0;
}