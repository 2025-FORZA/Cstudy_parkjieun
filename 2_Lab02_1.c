#include<stdio.h>

int main() {
	int X, N, sum=0;
	int a, b;
	scanf("%d\n %d", &X, &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		sum = sum + (a * b);
	}

	if (sum == X) {
		printf("Yes");
	}
	else
		printf("No");
	return 0;
}