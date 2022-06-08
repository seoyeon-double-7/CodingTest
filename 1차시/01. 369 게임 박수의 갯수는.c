#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// main���� ���Ǵ� solution �Լ��� ��ĭ�� ������ ���� ������ �����ؼ� �ֽ��ϴ�.
// ��� ���� �Ű������� ���� �޾Ƽ� ������� ��� �Ǵ���
// �������� ���ϰ��� �ϴ� �κ��� ��ĭ���� � �κ������� �ľ��ϼž� �մϴ�.
// 1���� ���� �޴� ���ڱ��� �� �ڸ����� �Ͽ� ������ ���ϴ� �Լ��׿�~
// ���ݴ� �ڼ��ϰ� �������ڸ� 20��° �ٿ��� /= 10�� �̿��Ͽ� �ڱ��ڽ��� 1���ڸ��� �����մϴ�.
// �׸��� 1�� �ڸ��� ���̻��� �ǹ̰� ���ٴ� ������
// ������ 1���ڸ��� 3���� 6���� 9������ ����� �ǰڳ׿�


int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if ((current / 3) == 0)
				count++;
			current /= 10;
		}
	}
	return count;
}

int main() {
	int number = 40;
	int ret = solution(number);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}