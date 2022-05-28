#include<stdio.h>
void hoanvi(int &x,int &y){
	int tg=x;x=y;y=tg;
	
}
void sapxep(int &n,int a[]){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1]>a[j])
			hoanvi(a[j-1],a[j]);
		}}
		for(i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
		
}
int main(){
	int n;int a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sapxep(n,a);
	return 0;
}
