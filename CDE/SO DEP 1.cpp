#include <stdio.h>
#include <math.h>
int isPerfectSquare(int x)
{
    int s = sqrt(x);
    if (s*s == x) {
    	return 1;
	}
    return 0;
}

int isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
  
    return 1;
}

int oki (int n) {
	int sum = 0;
	int m;
	while(n>0)    
	{    
		m=n%10;    
		sum=sum+m;    
		n=n/10;    
	}
	return isFibonacci(sum);
}


int main() {
//	printf("%d",oki(11));
	int a,b;
	scanf("%d %d", &a, &b);
	if (a > b) {
		int tm = a;
		a = b;
		b = tm;
	}
	for (int i = a; i < b;i++) {
		if (isPrime(i) && oki(i)) {
			printf("%d ", i);
		}
	}
	return 0;
}
