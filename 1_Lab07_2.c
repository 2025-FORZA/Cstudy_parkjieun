#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n; //n명의 덩치 비교
	scanf("%d", &n);

	int arr[50][2] ; //nx2배열 (몸무게, 키)

	for (int i = 0; i < n; i++) { // 몸무게, 키 입력받아 배열에 저장
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	int rank[50]; // 순위 배열
	for (int i = 0; i < n; i++) {
		rank[i] = 1;
	}

	for (int i = 0; i < n;i++) { //1번부터 n번까지 비교대상
		for (int j = 0;j < n; j++) {// 비교대상 +1 번호부터 n번까지 ==> n-1, n-2,...
			if (i == j) continue;
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				rank[i]++;
			}
		}
		//자식반복분 반복횟수 -1
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", rank[i]);
	}

	return 0;
}