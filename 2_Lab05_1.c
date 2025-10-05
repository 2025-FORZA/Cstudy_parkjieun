//#include <stdio.h>
//int main() {
//	int N, k, score[1000];
//	scanf_s("%d %d", &N, &k);
//	for (int i = 0; i < N; i++) {
//		scanf_s("%d", &score[i]);
//	}
//	
//	int a;
//	for (int i = 0; i < N-1; i++) {
//		for (int j=0; j< N-1; j++) {
//			if (score[j] < score[j+1]) {
//				a = score[j];
//				score[j] = score[j+1];
//				score[j+1] = a;
//			}
//		}
//	}
//	
//	printf("%d", score[k - 1]);
//	return 0;
//} 