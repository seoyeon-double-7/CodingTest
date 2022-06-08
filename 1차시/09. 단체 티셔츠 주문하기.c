#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ؼ��� �ʿ���� ��ũ�� �߰� ã�� �ʿ����
// �����Ӱ� �ڵ��� ������ �κ��Դϴ�.
// �������� �ڵ��Ͻø�˴ϴ�.
// ���� int answer = 0; ���� //���⿡ �ڵ带 �ۼ����ּ���
// ��� ǥ�õǾ� �ִ� ���� ���� int answer = 0 �� �״�� �־� �ϴ� ������ �Ͻʴϴ�.
// solution �Լ��� �����Ӱ� �ƹ����̳� �ۼ��ص� �������ϴ�.
// �߰������� ���� include �� �߰��ϼŵ� �˴ϴ�.

int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = malloc(sizeof(int) * shirt_size_len);
	for (int i = 0; i < shirt_size_len; i++) {
		if (shirt_size[i] == "XS") answer[0] = answer[0] + 1;
		else if (shirt_size[i] == "S") answer[1] = answer[1] + 1;
		else if (shirt_size[i] == "M") answer[2] = answer[2] + 1;
		else if (shirt_size[i] == "L") answer[3] = answer[3] + 1;
		else if (shirt_size[i] == "XL") answer[4] = answer[4] + 1;
		else if (shirt_size[i] == "XXL") answer[5] = answer[5] + 1;
	}
	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution �Լ��� ��ȯ ���� {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} �Դϴ�.\n");
}