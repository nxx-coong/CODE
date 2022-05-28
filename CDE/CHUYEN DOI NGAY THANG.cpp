#include <stdio.h>
#include <math.h>
int main() {
	int a, num1; scanf("%d", &a);
	if (a < 0) {
		printf("0 0 0");
	}
	int nam = a / 365;
	num1 = a - (nam * 365);
	int tuan = a / 7;
	num1 = a - (tuan * 7);
	printf("%d %d %d", nam, tuan, a);
	return 0;
}
