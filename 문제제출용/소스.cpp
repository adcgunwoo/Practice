#define _crt_no_secure_warnings
#include <stdio.h>
struct data
{
	char name[10];
	int age;
}buddy; //구조체 정의와 동시에 변수를 선언하는 방법으로 
int main() // struct data buddy; 와 같다.
{                                    
	                                //구조체형 변수 self를 선언하고 이름과 나이를 초기화
	struct data self={"손예준",12}; //구조체에 정의된 순서대로 멤버변수에 대입된다.
	printf("친한 친구의 이름과 나이를 입력하세요. ");
	scanf("%s %d", &buddy.name, &buddy.age);
	printf("당신의 이름 : %s, 나이 : %d\n", self.name, self.age);
	printf("친구의 이름 : %s, 나이 : %d", buddy.name, buddy.age);
	return 0;
}