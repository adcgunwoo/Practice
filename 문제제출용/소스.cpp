#define _crt_no_secure_warnings
#include <stdio.h>
struct data //data 라는 이름의 새로운 구조체를 정의.
{           //data는 구조체 태그라고 한다.
	char name[20];  
	int age;      //name과 age를 멤버변수라고 한다.
}; // ; 있음
int main()
{  //c++에서는 그냥 data self; 로 선언할 수 있다.
	struct data self;             //self라는 이름의 변수를 선언 
	printf("당신의 이름은 무엇입니까? ");
	scanf("%s", self.name);
	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &self.age);
	printf("당신의 이름은 %s이고 나이는 %d세이군요.", self.name, self.age);
	
	return 0; //예를 들어, 붕어빵 기계를 하나 만들었다고 하자. 
}             //가계의 이름을 data라고 한다면, name과 age는 팥과 밀가루라고 할 수 있다.