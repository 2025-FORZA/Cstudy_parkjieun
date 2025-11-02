#include <stdio.h>

int main(void) {
    long long A, B, V;
    scanf("%lld %lld %lld", &A, &B, &V);

    long long day = (V - A) / (A - B);

    if ((V - A) % (A - B) != 0) {
        day++;
    }

    day = day + 1;

    printf("%lld\n", day);
    return 0;
}
