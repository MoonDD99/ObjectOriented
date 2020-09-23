#include <stdio.h>

int main(void) {
	char str[100];
	puts("문자를 입력하세요(100자 이내)");
	scanf("%s", str);
	printf("입력된 문자는 %s 입니다.", str);

	return 0;
}
