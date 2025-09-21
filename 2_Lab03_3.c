#include <stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);

	int h[100000];
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &h[i]);
	}

	int count = 0;
	int max_height = 0;

	for (int i = N - 1; i >= 0; i--) {
		if (h[i] > max_height) {
			count++;
			max_height = h[i];
		}
	}

	printf("%d\n", count);
	return 0;
}