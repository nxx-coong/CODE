#include <stdio.h>
void bubble_Sort(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <n-i-1 ; ++j)
		{
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void merge(int a[],int b[],int n,int m){
	int i = 0;
	int j = 0;
	int c[m+n];
	int size = 0;
	while(i<n && j<m){
		if(a[i]>b[j]){
			c[size] = b[j];
			j++;
			size++;
		}else{
			c[size] = a[i];
			i++;
			size++;
		}
	}
	while(i<n){
		c[size] = a[i];
		size++;
		i++;
	}
	while(j<m){
		c[size] = b[j];
		size++;
		j++;
	}
	for (int k = 0; k < m+n; ++k)
	{
		printf("%d ",c[k]);
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m],b[n];
		for (int i = 0; i < m; ++i)
		{
			scanf("%d",&a[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&b[i]);
		}
		bubble_Sort(a,m);
		bubble_Sort(b,n);
		merge(a,b,m,n);
	}
}
