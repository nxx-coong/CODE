#include <stdio.h>

void mang(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}
 
int main()
{
    int n,dem, a[100];
    scanf("%d",&n);
    for (int i = 0;i < n;i++) {
    	scanf("%d",&a[i]);
	}
	scanf("%d",&dem);
	for (int i = n-dem;i < n;i++) {
		printf("%d ",a[i]);
	}
	for (int i = 0;i < n-dem;i++) {
		printf("%d ",a[i]);
	}
 
    return 0;
}

