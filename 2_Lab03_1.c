#include <stdio.h>
int main() {
	int a1, a2, b1, b2, c1, c2, x1, x2;
	scanf("%d %d\n", &a1, &a2);
	scanf("%d %d\n", &b1, &b2);
	scanf("%d %d\n", &c1, &c2);

	if (a1 == b1)
		x1 = c1;
	else if (a1 == c1)
		x1 = b1;
	else
		x1 = a1;


	if (a2 == b2)
		x2 = c2;
	else if (a2 == c2)
		x2 = b2;
	else
		x2 = a2;

	printf("%d %d\n", x1, x2);
	return 0;
}