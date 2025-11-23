//#include <stdio.h>
//int main() {
//	int t;
//	scanf_s("%d", &t);
//
//	for (int i = 0; i < t; i++) {
//		int a;
//		long long fac = 1;
//		int r;
//		scanf_s("%d", &a);
//		for (int j = 1; j <= a; j++) {
//			fac = fac * j;
//			while (fac % 10 == 0) { 
//				fac = fac / 10; 
//			}
//			fac = fac % 100000000LL;
//		}
//		
//		r = fac % 10;
//		printf("%d", r);
//	}
//	return 0;
//}

/* 소인수분해 활용하기
10 = 2 * 5이므로 (2의 개수가 5의 개수보다 무조건 많음) 
2개수-5개수 = 남은 2의 개수(10다 제외)
나머지 수*2의 개수 - 0으로 끝나지 않는 수*/