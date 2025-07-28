#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int sorted = 0;
    while (!sorted) {
        sorted = 1;
        for (int i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                for (int j = 0; j < 5; j++) {
                    printf("%d ", arr[j]);
                }
                printf("\n");
                sorted = 0;
            }
        }
    }

    return 0;
}
