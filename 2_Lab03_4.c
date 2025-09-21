#include <stdio.h>

int main() {
    int n, x, count = 0;

    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf_s("%d", &x);

        if (x < 2) continue; 

        int isPrime = 1; 

        for (int j = 2; j < x; j++) {
            if (x % j == 0) {
                isPrime = 0;  
                break;
            }
        }

        if (isPrime) count++; 
    }

    printf("%d\n", count);

    return 0;
}