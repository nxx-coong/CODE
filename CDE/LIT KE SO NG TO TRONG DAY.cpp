#include <stdio.h> 
void input(int a[],int n) {
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]); 
	}
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

int main () {
	int n, ans = 0;
	int a[100], ar[100];
	scanf("%d", &n);
	input(a,n);
	for (int i = 0;i < n;i++) {
		if (isPrime(a[i])) {
			ar[ans] = a[i];
			ans++;
		}
	}
	printf("%d ", ans);
	for (int i = 0;i < ans;i++) {
		printf("%d ", ar[i]);
	}
	return 0;
}
