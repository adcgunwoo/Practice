#define _crt_no_secure_warnings
#include <stdio.h>
struct data //data 는 구조체 태그라고 한다
{
	char name[20]; // 구조체에 정의된 이 세개는  
	int kor,eng;   // 멤버변수라고 한다.
};  //요기에 선언할 수 있다는 것도 기억해야함
int main() 
{                                    
	struct data lee,jun; // 두 개의 변수를 이렇게 선언할 수 있다.
	
	scanf("%s %d %d", lee.name, &lee.kor, &lee.eng);
	scanf("%s %d %d", jun.name, &jun.kor, &jun.eng);

	printf("%s %d %d\n", lee.name, lee.kor, lee.eng);
	printf("%s %d %d\n", jun.name, jun.kor, jun.eng);
	printf("합계 %d %d", lee.kor + jun.kor, lee.eng + jun.eng);
	
	return 0;
}