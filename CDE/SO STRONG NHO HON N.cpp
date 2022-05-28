#include <stdio.h> 
#include <math.h>

int gt(int n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}

int oki(int n) {
	int tm = n,m,s = 0;
	while(n>0)    
	{    
		m=n%10;  
		s += gt(m);
		n=n/10;    
	}
	if (s == tm) return 1;
	else return 0;
}

int main() {
	int n;scanf("%d", &n);
	for (int i = 1;i < n;i++) {
		if (oki(i)) printf("%d ",i);
	}
	return 0;
}
