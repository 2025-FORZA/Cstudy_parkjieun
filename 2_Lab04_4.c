#include <stdio.h>

int main() {
	int arr[1000] = { 0 };

	int index = 0;
	for (int i = 0; i < 45; i++) {
		for (int j = 0; j <= i ; j++) {
			arr[index] = i + 1;
			index++;
			if (index >= 1000) break;
		}
	}
	
	int start, end, sum = 0;
	scanf_s("%d %d", &start, &end);
	for (int i = start - 1; i < end; i++) {
		sum += arr[i];
	}

	printf("%d\n", sum);
	return 0;
}