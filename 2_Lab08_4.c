#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    const char* s1 = (const char*)a;
    const char* s2 = (const char*)b;

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return len1 - len2;
    return strcmp(s1, s2);
}

int main() {
    int N;
    char arr[20000][51];

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%s", arr[i]);

    qsort(arr, N, sizeof(arr[0]), compare);

    printf("%s\n", arr[0]);
    for (int i = 1; i < N; i++)
        if (strcmp(arr[i], arr[i - 1]) != 0)
            printf("%s\n", arr[i]);

    return 0;
}
