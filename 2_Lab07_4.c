#include <stdio.h>

int main() {
	int arr[9], sum = 0;
	for (int i = 0; i < 9; i++) { 
		scanf_s("%d", &arr[i]); 
		sum += arr[i];
	}
	
	sum -= 100; // 2난쟁이 키 합

	for (int i = 0; i < 9; i++) {
		for (int j = i; j < 9; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}// 오름차순 정렬

	int f1 = -1, f2 = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == sum) {
				f1 = i;
				f2 = j;
				break;
			}
			if (f1 != -1) { break; }
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i!=f1 && i!=f2) {
			printf("%d\n", arr[i]);
		}
	}

	return 0;
}