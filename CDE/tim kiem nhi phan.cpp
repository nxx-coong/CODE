#include <stdio.h>
int binary_search(int a[],int n,int k){
	int low = 0;
	int hight = n-1;
	while(low<=hight){
		int mid =low+(hight-low)/2;
		if(a[mid]>k){
			hight = mid-1;
		}
		if(a[mid]<k){
			low = mid+1;
		}
		if(a[mid]==k){
			return mid;
		}
	}
	return -1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n];
		for (int i = 0; i<n; ++i)
		{
			scanf("%d",&a[i]);
		}
		if(binary_search(a,n,k)==-1){
			printf("%d\n",-1 );
		}else{
			printf("%d\n",1);
		}

	}
}
