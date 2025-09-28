//#include <stdio.h>
//
//int main() {
//	int cost, remain, coin[6] = { 500, 100, 50, 10, 5, 1 }, num=0;
//	scanf("%d", &cost);
//	remain = 1000 - cost;
//
//	for (int i=0; i <6; i++) {
//		if (remain / coin[i] > 0) {
//			num += remain / coin[i];
//			remain = remain % coin[i];
//		}
//		else
//			continue;
//	}
//	printf("%d\n", num);
//	return 0;
//}