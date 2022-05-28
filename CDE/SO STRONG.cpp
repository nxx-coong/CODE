#include <stdio.h> 
#include <math.h>

int gt(int n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}


int main() {
	int n,m,s=0;scanf("%d", &n);
	int tm = n;
	while(n>0)    
	{    
		m=n%10;  
		s += gt(m);
		n=n/10;    
	}
	if (s == tm) printf("1");
	else printf("0");
	return 0;
}
