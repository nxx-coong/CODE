#include<stdio.h> 
int main(){ 
	int r,c; scanf("%d %d",&r,&c);
	if (r >= c) {
		for(int i=r;i>=1;i--) { 
			if (i > c) {
				for (int j = i;j >= i-c+1;j--) {
					printf("%d",j);
				}
			} else {
				for (int j = i; j >= 2;j--) {
					printf("%d",j);
				}
				for (int j = 1;j <= c-i+1;j++) {
					printf("%d",j);
				}
			}
			printf("\n"); 
		}
	} else {
		for (int i = 1;i <= r;i++) {
			for (int j = c-i+1;j >= 1;j--) {
				printf("%d",j);
			}
			for (int j = 2;j <= i;j++) {
				printf("%d",j);
			}
			printf("\n");
		}
	}
	return 0;
}


