#include <stdio.h>
int main() {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2) return 0;
    int k[1001];
    for (int i = 0; i < M; i++) scanf("%d", &k[i]);
    long long sum = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            if (i % k[j] == 0) {
                sum += i;
                break;
            }
        }
    }
    printf("%lld", sum);
    return 0;
}
