#include <stdio.h> 
#include <math.h>
void input(int a[],int n) {
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]); 
	}
}

int main () {
	int n;
	int i;
	int a[100];
	scanf("%d", &n);
	input(a,n);
//	for (i = 0;i < n;i++) {
//		printf("%d", a[i])
//	}
	return 0;
}
