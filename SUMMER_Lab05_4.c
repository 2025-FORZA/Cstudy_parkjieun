#include <stdio.h>
int idx(char c) {
    return c == 'A' ? 0 : c == 'G' ? 1 : c == 'C' ? 2 : 3;
}
int main() {
    int n;
    char s[1000005];
    if (scanf("%d %s", &n, s) != 2) return 0;
    char t[4][4] = {
        {'A','C','A','G'},
        {'C','G','T','A'},
        {'A','T','C','G'},
        {'G','A','G','T'}
    };
    char cur = s[n - 1];
    for (int i = n - 2; i >= 0; i--) cur = t[idx(s[i])][idx(cur)];
    printf("%c", cur);
    return 0;
}