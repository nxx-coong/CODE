#include<stdio.h> 
int main() { int T, n, a[100], d; 
scanf("%d", &T);
 while (T--) 
 { scanf("%d", &n); if(n <= 100) 
 { for(int i = 0; i < n; i++)
  { scanf("%d", &d); if(d > 0 && d <= 1000){ a[i] = d; } }
   for(int i = 0; i < n; i++) { if(a[i] % 2 == 0)
   { printf("%d ", a[i]); } } }
    printf("\n");
    } 
   return 0; 
   }
