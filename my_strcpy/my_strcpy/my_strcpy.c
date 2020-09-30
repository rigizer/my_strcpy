#include <stdio.h>

// 우측 매개변수는 기존의 데이터가 저장된 공간의 포인터
// 좌측 매개변수는 앞으로 복사될 데이터가 저장될 공간의 포인터 (포인터를 통해 복사 데이터 직접반환)
void my_strcpy(char* dest, char* src) {
	while (1) {
		// 각 메모리번지에 있는 데이터를 복사 (*src의 데이터 -> *dest의 데이터)
		*dest++ = *src++;

		// *src의 데이터가 끝날 때 무한반복 탈출
		// 문자열의 경우 \0을 처음 만나는 경우 문자열 종료
		if (*src == '\0') {
			break;
		}
	}

	// dest의 마지막에는 \0을 집어넣어 문자열이 끝났음을 알림
	*dest = '\0';
}

int main(void) {
	char origin[] = "helloworld";	// 원본 데이터
	char test[20];					// 복사될 변수 공간

	my_strcpy(test, origin);
	printf("result: %s\n", test);	// 복사 결과 출력

	return 0;
}