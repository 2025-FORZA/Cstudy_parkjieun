#include <stdio.h>

int main() {
	int A, B, C, time[101] = { 0 };
	scanf_s("%d %d %d", &A, &B, &C);

	int s1, s2, s3, f1, f2, f3;

	scanf_s("%d %d", &s1, &f1);
	scanf_s("%d %d", &s2, &f2);
	scanf_s("%d %d", &s3, &f3);

	for (int i = 0; i < 101; i++) {
		if (s1 <= i && i < f1)
			time[i]++;
		if (s2 <= i && i < f2)
			time[i]++;
		if (s3 <= i && i < f3)
			time[i]++;
	}

	int sum = 0;
	for (int i = 0; i < 101; i++) {
		if (time[i] == 1)
			sum += 1 * A;
		else if (time[i] == 2)
			sum += 2 * B;
		else if (time[i] == 3)
			sum += 3 * C;
	}

	printf("%d\n", sum);
	return 0;
}