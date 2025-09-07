#include <stdio.h>

int get_sum(int num) {
    int sum = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (get_sum(i) == N) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("0\n");
    return 0;
}