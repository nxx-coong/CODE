#include <stdio.h>
int min(int m,int n){
	if(m>n){
		return n;
	}else{
		return m;
	}
}
void merge (int a[],int b[],int m,int n){
	int i = 0;
	int j=0;
	int h = 0;
	int g = 0;
	int hop[n+m];
	int giao[min(m,n)];
	while(i<m && j<n){
		if(a[i]==b[j]){
			hop[h]=a[i];
			giao[g] = a[i];
			h++;
			g++;
			i++;
			j++;
		}
		else if(a[i]<b[j]){
			hop[h++] = a[i++];
		}
		else{
			hop[h++] = b[j++];
		}
	}
	while(i<m){
		hop[h++]=a[i++];
	}
	while(j<n){
		hop[h++]=b[j++];
	}
	for (int i = 0; i < h; ++i)
	{
		printf("%d ",hop[i]);
	}
	printf("\n");
	for (int i = 0; i < g; ++i)
	{
		printf("%d ",giao[i]);
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
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&b[j]);
		}
		merge(a,b,m,n);

	}
}
