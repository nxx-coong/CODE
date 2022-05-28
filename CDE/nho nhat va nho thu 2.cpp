#include <stdio.h>
int main() {
	int T, n, i;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		int A[n];
		int min=9999999, min_2=9999999;
		for(i=0;i<n;i++){
			scanf("%d", &A[i]);
		}
		for(i =0 ; i<n; i++){
		if(A[i]<min)
			min = A[i];
		}
	
		for(i=0; i<n; i++){
			if (A[i]==min){
				continue;
			}else{
				if(A[i]<min_2){
					min_2 = A[i];
				}
			}
		}
		if(min_2!=9999999) {
			printf("%d %d\n", min, min_2);
		} else {
			printf("-1\n");
		}
	}
}
