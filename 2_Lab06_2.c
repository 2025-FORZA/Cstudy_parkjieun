#include <stdio.h>

int main() {
	int e, f, c, total = 0, count = 0, new_b;
	scanf_s("%d %d %d", &e, &f, &c);
	total = e + f;
	while (total >= c) {
		new_b = total / c;
		count += new_b;
		total = new_b + (total % c);
	}
	printf("%d", count);
	return 0;
}