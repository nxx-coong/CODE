#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	int tg;
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int result =1;
		int check = 0;
		while(1) {
			for(int i = 0; i < n; i++) {
				if(a[i]!=result) check ++;
			}
			if(check != n) {
				check =0;
				result++;
			} else if(check == n) {
				printf("%d",result );
				break;
			}

		}
		printf("\n");
	}
}
