#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int H, W, N;
        scanf("%d %d %d", &H, &W, &N);

        int floor = N % H;
        if (floor == 0)
            floor = H;

        int room = (N - 1) / H + 1;

        printf("%d%02d\n", floor, room);
    }

    return 0;
}
