#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);

	int cow[10]; //0~9번 소 배열
	int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; //소 별로 움직인 횟수 배열

	for (int i = 0; i < 10; i++) {
		cow[i] = -1; //소 배열 초기화 -1
	}

	for (int i=0; i < n; i++) {
		int cownum, location; //소 번호, 소 위치
		scanf("%d %d", &cownum, &location);
		if (cow[cownum-1] == -1) { //처음 움직이는 소면 위치 저장
			cow[cownum - 1] = location;
		}
		else {
			if (cow[cownum - 1] != location) { //위치가 바뀌었으면 해당 소 횟수 +1
				count[cownum - 1]++;
				cow[cownum - 1] = location;
			}
		}

	}


	int total = 0;
	for (int i = 0; i < 10; i++) {
		total += count[i]; //움직인 횟수 합
	}

	printf("%d", total);

	return 0;
}
