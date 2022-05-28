#include <stdio.h>

int oki(int num,int l,int ar[]) {
	int dem = 0;
	for (int i = 0;i < l;i++) {
		if (ar[i] == num) {
			dem++;
		}
	}
	return dem;
}

int check(int num,int l,int ar[]) {
	for (int i = 0; i < l;i++) {
		if (ar[i] == num) {
			return 1;
		}
	}
	return 0;
}

int main() { 
	int mang[100],checked[100],n; 
	scanf("%d",&n);
	for (int i = 0; i < n; i++) { 
		scanf("%d",&mang[i]); 
	}
	for (int i = 0;i < n;i++) {
		if (!check(mang[i], n, checked)) {
			printf("%d %d\n",mang[i], oki(mang[i],n,mang));	
			checked[i] = mang[i];
		}
	}
	return 0;
}
