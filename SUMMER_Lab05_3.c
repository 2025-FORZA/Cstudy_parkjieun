#include <stdio.h>
#include <string.h>
int main() {
    char s[1024];
    while (scanf("%1023s", s) == 1) {
        if (s[0] == '0' && s[1] == '\0') break;
        while (strlen(s) > 1) {
            printf("%s ", s);
            long long p = 1;
            for (int i = 0; s[i]; i++) p *= s[i] - '0';
            sprintf(s, "%lld", p);
        }
        printf("%s\n", s);
    }
    return 0;
}