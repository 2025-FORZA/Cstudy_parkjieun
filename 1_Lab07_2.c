#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n; //n���� ��ġ ��
	scanf("%d", &n);

	int arr[50][2] ; //nx2�迭 (������, Ű)

	for (int i = 0; i < n; i++) { // ������, Ű �Է¹޾� �迭�� ����
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	int rank[50]; // ���� �迭
	for (int i = 0; i < n; i++) {
		rank[i] = 1;
	}

	for (int i = 0; i < n;i++) { //1������ n������ �񱳴��
		for (int j = 0;j < n; j++) {// �񱳴�� +1 ��ȣ���� n������ ==> n-1, n-2,...
			if (i == j) continue;
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				rank[i]++;
			}
		}
		//�ڽĹݺ��� �ݺ�Ƚ�� -1
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", rank[i]);
	}

	return 0;
}