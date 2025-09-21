#include <stdio.h>
int main() {
	int A, B, C, X;
	int i;
	int count[10] = { 0 };
	scanf("%d\n", &A);
	scanf("%d\n", &B);
	scanf("%d\n", &C);

	X = A * B * C;
	while (X>0){
		i = X % 10;
		count[i]++;
		X = X / 10;
	}
	for (int c=0; c<10; c++){
		printf("%d\n", count[c]);
	}
	return 0;
}