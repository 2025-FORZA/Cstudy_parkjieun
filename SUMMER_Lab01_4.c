#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[201];
    char table[21][201];  // n �ִ� 20, str �ִ� 200

    scanf("%d", &n);
    scanf("%s", str);

    int len = strlen(str);
    int rows = len / n;

    int idx = 0;
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) { // ���� �� ������
            for (int j = 0; j < n; j++)
                table[j][i] = str[idx++];
        }
        else { // ������ �� ����
            for (int j = n - 1; j >= 0; j--)
                table[j][i] = str[idx++];
        }
    }

    // ������ �Ʒ���, ���� �� ������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < rows; j++)
            printf("%c", table[i][j]);
    }
    printf("\n");
    return 0;
}
