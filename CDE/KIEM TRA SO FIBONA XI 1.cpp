#include <stdio.h> 
#include <math.h>

long long isPerfectSquare(long long x)
{
    int s = sqrt(x);
    if (s*s == x) {
    	return 1;
	}
    return 0;
}

long long isFibonacci(long long n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

int main() {
	int n;scanf("%d", &n);
	if (isFibonacci(n)) printf("1");
	else printf("0");
	return 0;
}
