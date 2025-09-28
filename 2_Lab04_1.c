//#include <stdio.h>
//
//int main() {
//	int h1, m1, s1, h2, m2, s2, h, m, s, t1, t2, t;
//	scanf_s("%d:%d:%d", &h1, &m1, &s1);
//	scanf_s("%d:%d:%d", &h2, &m2, &s2);
//
//	t1 = h1 * 3600 + m1 * 60 + s1;
//	t2 = h2 * 3600 + m2 * 60 + s2;
//
//	t = t2 - t1;
//	if (t <= 0) {
//		t = t + 24*3600;
//	}
//
//	h = t / 3600;
//	t = t % 3600;
//	m = t / 60;
//	t = t % 60;
//	s = t;
//
//	printf("%02d:%d:%d\n", h, m, s);
//	return 0;
//}
