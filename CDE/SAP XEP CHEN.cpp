#include <stdio.h>
int main(){
	int n;
	scanf("%d\n",&n);
	int a[n],b[n];
	int i,j,tg,k,vt,key;
	
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Buoc %d: ",0);
    printf ("%d ",a[0]);
    printf("\n");
	for (i = 1; i < n; i++)
   	{
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
       	printf("Buoc %d: ",i);
		for (k=0;k<=i;k++) {
		printf("%d ",a[k]);
		}
		printf("\n");
	}	
//	for (i=0;i<n-1;i++){
//	printf("Buoc %d:",i+1);
//printf("%d\n ",a[j]);
//	printf("\n");
//	}
}

