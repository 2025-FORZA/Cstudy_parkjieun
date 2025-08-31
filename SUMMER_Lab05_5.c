#include <stdio.h>
#include <stdlib.h>
int cmp_desc(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return y - x;
}
int main() {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2) return 0;
    int a[105][105];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) scanf("%d", &a[i][j]);
        qsort(a[i], M, sizeof(int), cmp_desc);
    }
    int score[105] = { 0 };
    for (int r = 0; r < M; r++) {
        int mx = -1;
        for (int i = 0; i < N; i++) if (a[i][r] > mx) mx = a[i][r];
        for (int i = 0; i < N; i++) if (a[i][r] == mx) score[i]++;
    }
    int best = 0;
    for (int i = 0; i < N; i++) if (score[i] > best) best = score[i];
    int first = 1;
    for (int i = 0; i < N; i++) if (score[i] == best) {
        if (!first) putchar(' ');
        first = 0;
        printf("%d", i + 1);
    }
    return 0;
}