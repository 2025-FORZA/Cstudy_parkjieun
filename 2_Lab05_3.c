#include <stdio.h>

int main() {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n == -1) break; 

		int sum = 0; 
		int divisors[1000];
		int count = 0;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) { 
				sum += i;
				divisors[count++] = i;
			}
		}

		if (sum == n) {
			printf("%d = %d", n, divisors[0]);
			for (int i = 1; i < count; i++) {
				printf(" + %d", divisors[i]);
			}
			printf("\n");
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
	}
	return 0;
}