#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0){
	
	int n,m,s = 0; scanf("%d", &n);
	while(n>0)    
	{    
		m=n%10;  
		s += m;
		n=n/10;    
	}
	printf("%d\n", s);
//	return 0;
	t--;
}
}
