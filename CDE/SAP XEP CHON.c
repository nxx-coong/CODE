#include <stdio.h>
int main(){
	int min(int n,int a[],int i){
		int min=a[i];
		int vt=i;
		for (i=i+1;i<n;i++){			
			if(a[i]<min){
				min=a[i];
				vt =i;
			}
		}
		return vt;
	}
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i,j,tg,k,vt;
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n-1;i++){
		vt= min(n,a,i);
		tg=a[i];
		a[i]=a[vt];
		a[vt]=tg;
		printf("Buoc %d:",i+1);
		for (k=0;k<n;k++){
		printf(" %d",a[k]);	
		}
		printf("\n");
	}
}

