#define _crt_no_secure_warnings
#include <stdio.h>
void input(int &x, int &y)
{
	scanf("%d %d", &x, &y);
}
void sort1(int *x, int *y) //매개변수를 포인터로 선언해 주소를 전달받아 저장한다.
{                          //포인터는 주소만 저장할 수 있으므로 이 함수를 호출하기 위해
	int tmp;               //반드시 주소를 전달해야하며 일반적인 값을 전달할 수 없다.
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void sort2(int *q, int w)  //배열을 전달할 때, 배열로 받으면 상관없으나,
{                          //포인터 변수로 받으면 뒤에 []를 작성하면 안됨.
	int i, j;
	for (i = 0; i < w - 1; i++) {
		for (j = i + 1; j < w; j++) {
			if (q[i] > q[j]) {
				int tmp = q[i];
				q[i] = q[j];
				q[j] = tmp;
			}
		}
	}
}
void output(int n, int m, int z[], int h)
{
	int i;
	printf("%d %d\n", n, m);
	for (i = 0; i < h; i++) {
		printf("%d ", z[i]);
	}
}
int main()
{
	int a, b,arr[5]={1,3,9,4,2};
	input(a, b);
	sort1(&a, &b); //포인터는 주소로만 저장할 수 있으므로, 주소로 전달
	sort2(arr, 5); //매개변수를 받는 곳은 포인터 변수로 받았는데, 인수를 전달하는 곳은 평범함
	output(a, b, arr, 5);
	return 0;
}