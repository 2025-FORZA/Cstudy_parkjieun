//#include <stdio.h>
//
//int main() {
//	int num, p[1000] = { 0 };
//	int sum = 0;
//
//	scanf_s("%d", &num);
//
//	for (int i = 0; i < num; i++) {
//		scanf_s("%d", &p[i]);
//	}
//
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < num; j++) {
//			if (p[j]>p[i]) {
//				int temp = p[i];
//				p[i] = p[j];
//				p[j] = temp;
//			}
//		}
//	}
//
//	for (int s = 0; s < num; s++) {
//		for (int i = 0; i <= s; i++)
//			sum += p[i];
//	}
//
//	printf("%d", sum);
//
//}