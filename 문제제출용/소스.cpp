#define _crt_no_secure_warnings
#include <stdio.h>
#include <string.h>
int main()
{   
	char n,m[20], a[10][20] = {"champion", "tel", "pencil", "jungol", "olympiad", "class", "information", "lesson", "book", "lion"};
	int i, j, cnt = 0;;
	printf("���ڸ� �Է��ϼ���. ");
	scanf("%c", &n);

	for (i = 0; i < 10; i++) {
		if (strchr(a[i], n)) {
			printf("%s\n", a[i]);
			cnt += 1;
		}
	}
	if (cnt == 0) {
		printf("ã�� �ܾ �����ϴ�.\n");
	}
	cnt = 0;
	printf("\n���ڿ��� �Է��ϼ���. ");
	scanf("%s", m);
	for (i = 0; i < 10; i++) {
		if (strstr(a[i], m)) {
			printf("%s\n", a[i]);
			cnt += 1;
		}
	}
	if (cnt == 0) {
		printf("ã�� �ܾ �����ϴ�.\n");
	}

	return 0;
}