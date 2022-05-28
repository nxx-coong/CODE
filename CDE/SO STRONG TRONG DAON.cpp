#include <stdio.h> 
#include <math.h>

long long gt(long long n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}

long long oki(long long n) {
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
	int n,m;scanf("%d %d", &n,&m);
	if (n > m) {
		int tm = n;
		n = m;
		m = tm;
	}
	for (int i = n;i <= m;i++) {
		if (oki(i)) printf("%d ",i);
	}
	return 0;
}
