#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data //구조체형 data 정의
{
	double x, y;
};
void input(struct data &spt) //매개변수로 data 구조체를 전달받는다.
{                            //참조에 의해 전달받았으므로 전달한 원래의 값도 변한다.
	printf("점의 좌표는?(x, y) ");
	scanf("%lf %lf", &spt.x, &spt.y);

}
struct data center(struct data a, struct data b) //두 좌표를 구조체로 전달받음
{
	struct data cen; //구조체 지역변수 cen을 생성
	cen.x = (a.x + b.x)/2;
	cen.y = (a.y + b.y)/2;

	return cen; //계산후 리턴
}               //리턴값이 구조체 data 이므로 함수의 형도 data로 선언해야함.
void output(struct data& p) 
{
	printf("중심점의 위치 = (%.1lf, %.1lf)", p.x, p.y); // 출력
}
int main()
{
	struct data one, two, result; //구조체형 data 선언
	input(one);
	input(two);
	result=center(one, two);
	output(result);
	
	return 0;
}