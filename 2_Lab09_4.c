#include <stdio.h>

int main() {
	int arr[10];
	long long a;
	scanf_s("%lld", &a);
	int length = 0;

	for (int i = 0; i < 10; i++) {
		if (a == 0) { break; }
		arr[i] = a % 10;
		a = a / 10;
		length++;
	}

	for (int i = 0; i < length; i++) {
		int large = i;
		for (int j = i+1; j < length; j++) {
			if (arr[j] > arr[large]) {
				large = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[large];
		arr[large] = temp;

	}
	for (int i = 0; i < length; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}