#include <stdio.h>

// ���� �Ű������� ������ �����Ͱ� ����� ������ ������
// ���� �Ű������� ������ ����� �����Ͱ� ����� ������ ������ (�����͸� ���� ���� ������ ������ȯ)
void my_strcpy(char* dest, char* src) {
	while (1) {
		// �� �޸𸮹����� �ִ� �����͸� ���� (*src�� ������ -> *dest�� ������)
		*dest++ = *src++;

		// *src�� �����Ͱ� ���� �� ���ѹݺ� Ż��
		// ���ڿ��� ��� \0�� ó�� ������ ��� ���ڿ� ����
		if (*src == '\0') {
			break;
		}
	}

	// dest�� ���������� \0�� ����־� ���ڿ��� �������� �˸�
	*dest = '\0';
}

int main(void) {
	char origin[] = "helloworld";
	char test[20];

	my_strcpy(test, origin);
	printf("result: %s\n", test);	// ��� ���

	return 0;
}