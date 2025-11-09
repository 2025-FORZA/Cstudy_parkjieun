//#include <stdio.h>
//
//int main() {
//	long long N;
//	int F, remain, a;
//	scanf_s("%lld", &N);
//	scanf_s("%d", &F);
//	remain = N % 100;
//	N = N - remain;
//
//	for (int i = 0; i < 100; i++) {
//		if (((N + i) % F) == 0){
//			a = i;
//			break;
//		}
//	}
//	printf("%02d", a);
//	return 0;
//}