#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char n,m[20], a[10][20] = {"champion", "tel", "pencil", "jungol", "olympiad", "class", "information", "lesson", "book", "lion"};
	int i, j, cnt = 0;;
	printf("문자를 입력하세요. ");
	scanf("%c", &n);

	for (i = 0; i < 10; i++) {
		if (strchr(a[i], n)) {
			printf("%s\n", a[i]);
			cnt += 1;
		}
	}
	if (cnt == 0) {
		printf("찾는 단어가 없습니다.\n");
	}
	cnt = 0;
	printf("\n문자열을 입력하세요. ");
	scanf("%s", m);
	for (i = 0; i < 10; i++) {
		if (strstr(a[i], m)) {
			printf("%s\n", a[i]);
			cnt += 1;
		}
	}
	if (cnt == 0) {
		printf("찾는 단어가 없습니다.\n");
	}

	return 0;
}