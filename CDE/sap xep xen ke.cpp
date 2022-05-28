#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <n-i-1 ; ++j)
		{
			int temp = a[j];
			if(a[j]>a[j+1]){
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	int l = 0,r = n-1;
	while(r>=l){
		if(r==l){
			printf("%d",a[r]);
			break;
		}
		printf("%d %d ",a[r],a[l]);
		l++;
		r--;
	}
	printf("\n");
	}
}
