#include <stdio.h>
#include <math.h>

int main() {
	int n,ar[10],m,c = 0; scanf("%d", &n);
	
	while(n>0)    
	{    
		m=n%10;  
		ar[c] = m;  
		c++;
		n=n/10;    
	}
	printf("%d %d", ar[c-1], ar[0]);
	return 0;
}
