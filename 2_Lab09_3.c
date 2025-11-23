//#include <stdio.h>
//
//int main() {
//	while (1) {
//		int arr[15];
//		int temp, num = 0;
//		while (1) {
//			scanf_s("%d", &temp);
//			if (temp == -1) { return 0; }
//			if (temp == 0 ) { break; }
//			arr[num] = temp;
//			num++;
//		} // 리스트 입력 받기
//
//		int result = 0;
//
//		for (int i = 0; i < num; i++) {
//			int minIndex = i;
//			for (int j = i + 1; j < num; j++) {
//				if (arr[j] < arr[minIndex]) {
//					minIndex = j;
//				}
//			}
//			int t = arr[i];
//			arr[i] = arr[minIndex];
//			arr[minIndex] = t;
//		} // 오름차순 정렬
//
//		for (int i = 0; i < num; i++) {
//			if (i > 0 && arr[i] == arr[i - 1]) {
//				continue;
//			}
//			for (int j = 0; j < num; j++) {
//				if (arr[i] * 2 == arr[j]) {
//					result++;
//				}
//			}
//		} // result 구하기
//
//		printf("%d\n", result);
//	}
//	return 0;
//}