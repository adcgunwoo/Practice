#define _crt_no_secure_warnings
#include <stdio.h>
//#include <stdlib.h> //atoi, atof 함수를 사용하기 위해 정의
#include <string.h>
int main()
{   
	char arr[100];
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	sprintf(arr, "%.2lf%.2lf%.2lf", a, b, c); //세 변수의 내용을 문자열arr에 출력한다.
	int i, len = strlen(arr);                 //출력한다는게 모니터에 출력하는 것이 아니라
	                                          //지정된 문자열에 출력하여 저장하는 함수이다.
	for (i = 0; i < len; i++) {               //문자뿐만 아니라 정수나 실수와 같은 자료형도
		if (arr[i] == '.') {                  //일단 출력이 되면 모두 문자열로 저장한다.
			printf("\n");
		}
		else printf("%c", arr[i]);
	}

	return 0;
}