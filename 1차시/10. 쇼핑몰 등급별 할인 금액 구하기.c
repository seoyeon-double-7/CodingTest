#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// COS PRO 
// �ؼ��� �ʿ���� ��ũ�� �߰� ã�� �ʿ����
// �����Ӱ� �ڵ��� ������ �κ��Դϴ�.
// �������� �ڵ��Ͻø�˴ϴ�.
// ���� int answer = 0; ���� //���⿡ �ڵ带 �ۼ����ּ���
// ��� ǥ�õǾ� �ִ� ���� ���� int answer = 0 �� �״�� �־� �ϴ� ������ �Ͻʴϴ�.
// solution �Լ��� �����Ӱ� �ƹ����̳� �ۼ��ص� �������ϴ�.
// �߰������� ���� include �� �߰��ϼŵ� �˴ϴ�.

int solution(int price, char* grade) {
	int answer = 0;
	double sale = 0;
	if (grade == "S") sale = 0.95;
	else if (grade == "G") sale = 0.9;
	else if (grade == "V") sale = 0.85;
	answer = price * sale;
	return answer;
}

int main() {
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}
