#include<stdio.h>
 main(){
  int t,n; scanf("%d",&t);
   while(t--){ scanf("%d",&n);
    int c = n%10;
	 while(n>=10) n/=10; if(c==n)
	  printf("YES\n");
	   else printf("NO\n"); } }
