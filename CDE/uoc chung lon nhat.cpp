#include <stdio.h> 
int Ucln(int a, int b)
 { int r = b % a;
  while (b != 0) { r = b; b = a % b; a = r; } 
  return (a); } 
  int main()
   { int t; scanf("%d", &t);
    while (t-- != 0)
	 { int n, m;
	  scanf("%d%d", &n, &m);
	   printf("%d\n",
	    Ucln(n , m)); 
		} return 0; }
