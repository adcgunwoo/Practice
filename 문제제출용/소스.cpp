#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
struct data
{
	int age;
	char name[20],arr[200];
}tmp[10];
int main()
{
	int i,n;
	//아래에서 파일 입출력 스트림을 생성하기 위해 파일포인터를 선언
	//포인터 변수의 이름은 곧 스트림의 이름이 된다.
	FILE* in = fopen("input.txt", "r"); //입력 파일스트림을 생성
	FILE* out = fopen("output.txt", "w"); //출력 파일 스트림을 생성
	//input.txt을 읽기 전용으로 오픈하고, in이라는 스트림을 이용해 연결
	//output.txt을 출력 전용으로 오픈하고, out이라는 스트림을 이용하여 연결	
	
	fscanf(in, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(in, "%s %d\n", tmp[i].name, &tmp[i].age); //age를 입력받으면 15가 저장되고 커서는 15 다음에 위치하게 된다.
		fgets(tmp[i].arr, 200, in);                      //다음에 fgets를 실행하면 커서가 위치한 곳으로부터 
	}                                                    //그 행의 마지막까지 입력받게 되는데 그 행의 뒤는 아무것도 없기에 입력을 못받는다.
	for (i = 0; i < n; i++) {                            //따라서 다음 행의 내용을 입력받으려면 커서의 위치를 다음행으로 이동시키기 위해
		fprintf(out, "이름 : %s\n", tmp[i].name);        //fscanf 내에 \n을 붙여준다.
		fprintf(out, "나이 : %d세\n", tmp[i].age);
		fprintf(out, "수상실적 : %s\n", tmp[i].arr);
	}
	for (i = 0; i < n; i++) {
		printf("이름 : %s\n", tmp[i].name);
		printf("나이 : %d세\n", tmp[i].age);
		printf("수상실적 : %s\n", tmp[i].arr);
	}

	fclose(in); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	fclose(out); //함수가 종료될때 닫히지만 예기치 않게 중단될때를 대비해 작성해야함.
	

	return 0;
}