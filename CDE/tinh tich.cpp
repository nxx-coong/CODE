#include<stdio.h>
int main() {
	int T, m, n, i;
	scanf("%d", &T);
	while(T--) {
		scanf("%d%d", &m, &n);
		long long A[m+1], B[n+1];
		long long max = -99999999, min=99999999;
		for(i=0;i<m;i++) {
			scanf("%lld", &A[i]);
			if(A[i] > max) {
				max = A[i];
			}
		}
		for(i=0;i<n;i++) {
			scanf("%lld", &B[i]);
			if(B[i] < min) {
				min = B[i];
			}
		}
		printf("%lld\n", min*max);
	}
}
