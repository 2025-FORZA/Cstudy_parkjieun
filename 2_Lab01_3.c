# include <stdio.h>

int main() {
	int N, M, card[100], max = 0;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%d", &card[i]);

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int total = card[i] + card[j] + card[k];
				if (max < total && total <= M) max = total;
			}
		}
	}
	printf("%d", max);
	return 0;
}