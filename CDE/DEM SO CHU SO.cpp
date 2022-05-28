#include <stdio.h>
#include <math.h>

int main() {
	int n,m;scanf("%d",&n);
	int c = 0;
	while(n>0)    
	{    
		m=n%10;    
		c++;
		n=n/10;    
	}
	printf("%d",c);
	return 0;
}
