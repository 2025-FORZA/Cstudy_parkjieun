//#include <stdio.h>
//
//int main() {
//	int arr[5];
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	int temp;
//	for (int k = 0; k < 4; k++) {
//		for (int j = 0; j < 4 - k; j++) {
//			if (arr[j + 1] < arr[j]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("%d\n", sum / 5);
//	printf("%d\n", arr[2]);
//
//	return 0;
//}