#include <stdio.h>

int main() {
    int n, m, arr[101], i, j, temp;
    scanf("%d %d", &n, &m);
    for (int a = 1; a <= n; a++) arr[a] = a;
    for (int a = 0; a < m; a++) {
        scanf("%d %d", &i, &j);
        while (i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    for (int a = 1; a <= n; a++) printf("%d ", arr[a]);
    return 0;
}
