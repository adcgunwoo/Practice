#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data //data 는 구조체 태그라고 한다
{
	char name[20]; // 구조체에 정의된 이 세개는  
	int kor,eng;   // 멤버변수라고 한다.
};  //요기에 선언할 수 있다는 것도 기억해야함
struct data plus(struct data i,struct data r) // 두 개의data 구조체형을 인수로 전달받아
{                                             // data 구조체형을 리턴하는 함수를 선언한다.
	struct data sum;
	strcpy(sum.name, "합계");
	sum.kor = i.kor + r.kor;
	sum.eng = i.eng + r.eng;

	return sum; //인수로 전달받은 구조체 i와 r의 국어, 영어의 합을 
}               //sum의 해당 멤버에 대입한다.
int main()      //리턴되는 자료형과 함수의 자료형은 같아야함
{                                    
	struct data lee,jun,hap; // 두 개의 이상의 변수를 이렇게 선언할 수 있다.
	
	scanf("%s %d %d", lee.name, &lee.kor, &lee.eng);
	scanf("%s %d %d", jun.name, &jun.kor, &jun.eng);

	hap=plus(lee, jun); // 인수로 전달

	printf("%s %d %d\n", lee.name, lee.kor, lee.eng);
	printf("%s %d %d\n", jun.name, jun.kor, jun.eng);
	printf("%s %d %d\n", hap.name, hap.kor, hap.eng);
	
	return 0;
}