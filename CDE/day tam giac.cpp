#include<stdio.h>

void nhap(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]) ;
	} 
} 
int max(int a[], int n){
	int max = a[0];
	for(int i =1;i <n; i ++){
		if(max < a[i]){
			max = a[i]; 
		} 
	} 
	return max ;
} 

int main()
{
    int t;
    scanf("%d",&t) ;
	for(int i =0; i < t;i++){
		int a[1000];
		int n;
		scanf("%d",&n);
		nhap(a,n);
		printf("%d\n", max(a,n)); 
	} 
	return 0; 
}
