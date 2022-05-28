#include <stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	int tg;
	while(T--) {
		int n, i, j;
		scanf("%d", &n);
		int A[n];
		for(i = 0; i < n-1; i++) {
			scanf("%d", &A[i]);
		}
		int r =1;
		int check = 0;
		while(1) {
			for(i = 0; i < n-1; i++) {
				if(A[i]!=r) {
					check ++;
				}
			}
			if(check == n-1) {
				printf("%d",r );
				break;
			} else if(check != n-1) {
				check =0;
				r++;
			}
		}
		printf("\n");
	}
}
