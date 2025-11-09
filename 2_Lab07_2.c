//#include <stdio.h>
//
//int main() {
//	int total = 0, temp, low = 0, high = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d", &temp);
//		total += temp;
//		if (total <= 100) {
//			low = total;
//		}
//		else if (high == 0) {
//			high = total;
//		}
//	}
//
//	if (low != 0 && high != 0) {
//		if (100 - low >= high - 100) {
//			printf("%d", high);
//		}
//		else {
//			printf("%d", low);
//		}
//	}
//	else
//		printf("%d", low);
//	return 0;
//}