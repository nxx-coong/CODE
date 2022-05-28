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
	if (ar[0] != 0)  {
		printf("%d", ar[0]);
	}
	for (int i = c-2;i >= 1; i--) {
		printf("%d", ar[i]);
	}
	printf("%d", ar[c-1]);
	return 0;
}
