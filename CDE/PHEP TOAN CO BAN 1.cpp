#include <stdio.h>
#include <math.h>
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	if (b == 0) {
		printf("0");
	} else {
		printf("%d %d %d ", a + b, a - b, a*b);
		float c = a, d = b;
		printf("%.2f %d", c/d, a%b);
	}
	return 0;
}
