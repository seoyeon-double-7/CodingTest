#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// main���� ���Ǵ� solution �Լ��� ��ĭ�� ������ ���� ������ �����ؼ� �ֽ��ϴ�.
// ��� ���� �Ű������� ���� �޾Ƽ� ������� ��� �Ǵ���
// �������� ���ϰ��� �ϴ� �κ��� ��ĭ���� � �κ������� �ľ��ϼž� �մϴ�.
// ���޹��� �Ű�����(�迭)�� ���ʿ������� ��ĭ�� �̵��ϸ鼭 ��ȯ���ִ� �Լ��׿�
// ��ĭ ��ĭ �̵��ϸ� ���� ��ȯ�� �Ѵٸ� �� ���� �� ������
// ���̻� ������ ���ٸ� �ٽ� ����ġ�� �ǵ��ư��� ���� �߻��� �� �ְڳ׿�

int* solution(int arr[], int arr_len) {
    int left = 0;
    int right = arr_len - 1;
    while (left < (arr_len / 2)) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left += 1;
        right -= 1;
    }
    return arr;
}

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int arr_len = 4;
    int* ret = solution(arr, arr_len);

    printf("solution �Լ��� ��ȯ ���� {");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} �Դϴ�.\n");
}