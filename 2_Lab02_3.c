#include <stdio.h>
int gcd(int a, int b) {
	int min = (a < b) ? a : b; 

	for (int i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i; 
		}
	}
	return 1; 
}

int lcm(int a, int b) {
	int max = (a > b) ? a : b;

	
	for (int i = max; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			return i;
		}
	}
	return a * b;
}

int main() {
	int T;
	scanf("%d", &T);

	
	while (T--) {
		int a, b;
		scanf("%d %d", &a, &b);

		int g = gcd(a, b);
		int l = lcm(a, b);

		printf("%d %d\n", l, g);
	}
	return 0;
}