#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		float a=sqrt(n);
		if(a==(int)a)printf("YES\n");
		else printf("NO\n");
	}
}
