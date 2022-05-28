#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		long n, k, h, j=0;
		scanf("%d%d",&n,&k);
		for(int i=1; i<=n; i++){
			scanf("%d",&h);
			if(h==k) j=i;
		}
		printf("%d\n",j);
	}
}
