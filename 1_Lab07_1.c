#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);

	int cow[10]; //0~9�� �� �迭
	int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //�� ���� ������ Ƚ�� �迭

	for (int i = 0; i < 10; i++) {
		cow[i] = -1; //�� �迭 �ʱ�ȭ -1
	}

	for (int i=0; i < n; i++) {
		int cownum, location; //�� ��ȣ, �� ��ġ
		scanf("%d %d", &cownum, &location);
		if (cow[cownum-1] == -1) { //ó�� �����̴� �Ҹ� ��ġ ����
			cow[cownum - 1] = location;
		}
		else {
			if (cow[cownum - 1] != location) { //��ġ�� �ٲ������ �ش� �� Ƚ�� +1
				count[cownum - 1]++;
				cow[cownum - 1] = location;
			}
		}

	}


	int total = 0;
	for (int i = 0; i < 10; i++) {
		total += count[i]; //������ Ƚ�� ��
	}

	printf("%d", total);

	return 0;
}
