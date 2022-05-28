#include <stdio.h> 
#include <math.h>
int st(int n) { 
	int x,tong =0; 
	for(int i = 1 ; i < n ;i++ )
	{ 
		if(n % i == 0){ 
			tong = tong + i; 
		}
	} 
	if(n==tong){ return 1;} 
	else{ return 0;} 
} 

 int hh(int i){return pow(2,i-1)*(pow(2,i)-1);}
int main(){ 
	int a,i; 
	scanf("%d",&a);
	for( i = 1; hh(i) <= a;i++){ 
		if(st(hh(i))) printf("%d ",hh(i)); 
	}
	return 0; 
}


