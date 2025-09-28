//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//    char a[10], b[10];
//    char minA[10], minB[10];
//    char maxA[10], maxB[10];
//
//    scanf_s("%s %s", a, (unsigned)sizeof(a), b, (unsigned)sizeof(b));
//
//    // 복사
//    strcpy_s(minA, sizeof(minA), a);
//    strcpy_s(minB, sizeof(minB), b);
//    strcpy_s(maxA, sizeof(maxA), a);
//    strcpy_s(maxB, sizeof(maxB), b);
//
//    // 6 -> 5
//    for (int i = 0; i < strlen(minA); i++) {
//        if (minA[i] == '6') minA[i] = '5';
//    }
//    for (int i = 0; i < strlen(minB); i++) {
//        if (minB[i] == '6') minB[i] = '5';
//    }
//
//    // 5 -> 6
//    for (int i = 0; i < strlen(maxA); i++) {
//        if (maxA[i] == '5') maxA[i] = '6';
//    }
//    for (int i = 0; i < strlen(maxB); i++) {
//        if (maxB[i] == '5') maxB[i] = '6';
//    }
//
//    // 문자열 -> 정수 변환 >> 합산
//    int minSum = atoi(minA) + atoi(minB);
//    int maxSum = atoi(maxA) + atoi(maxB);
//
//    // 출력
//    printf("%d %d\n", minSum, maxSum);
//
//    return 0;
//}
//
