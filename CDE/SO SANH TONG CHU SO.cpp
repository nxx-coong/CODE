#include<stdio.h> 
int oki(int n) {
	int m,s = 0;
	while(n>0)
	{    
		m=n%10;  
		s += m;
		n=n/10;
	}
	return s;
}
int main() {
	int n,m;scanf("%d %d",&n,&m);
	if (oki(n) > oki(m)) {
		printf("%d %d",m,n);
	} else {
		printf("%d %d",n,m);
	}
	return 0;
}
