#define _crt_no_secure_warnings
#include <stdio.h>
int main()
{
	int* a = new int; //일반적으로 자료를 저장하기 위해 
	int* b = new int; //메모리 공간을 확보하려면 변수를 선언해야하는데
	// new int는 변수 이름이 없이 정수형 메모리 공간을 확보하려는 것이다.
	scanf("%d %d", a, b);
	printf("%d + %d = %d", *a, *b, *a + *b);

	delete a; //5,6번째 줄에 할당된 메모리 제거
	delete b; // new 키워드로 생성된 동적메모리는 함수가 끝나도 종료되지 않음
	//그러면 계속 메모리를 점유하게 되므로, 함수를 끝내기전 종료시키는 것이 바람직
	return 0;
}