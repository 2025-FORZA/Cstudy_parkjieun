#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char map[50][51];
    for (int i = 0; i < N; i++) {
        scanf("%s", map[i]);
    }

    int rows_missing = 0;
    for (int i = 0; i < N; i++) {
        int has_guard = 0;
        for (int j = 0; j < M; j++) {
            if (map[i][j] == 'X') {
                has_guard = 1;
                break;
            }
        }
        if (!has_guard) rows_missing++;
    }

    int cols_missing = 0;
    for (int j = 0; j < M; j++) {
        int has_guard = 0;
        for (int i = 0; i < N; i++) {
            if (map[i][j] == 'X') {
                has_guard = 1;
                break;
            }
        }
        if (!has_guard) cols_missing++;
    }

    int answer = rows_missing;
    if (cols_missing > answer) answer = cols_missing;

    printf("%d\n", answer);
    return 0;
}
