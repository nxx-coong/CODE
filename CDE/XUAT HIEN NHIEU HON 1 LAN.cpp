#include <stdio.h>
int main() { 
	int mang[100],n,kt = 0; 
	scanf("%d",&n);
	for (int i = 0; i < n; i++) { 
		scanf("%d",&mang[i]); 
	} 
	for (int i = 0; i < n; i++) { 
		for (int j = 1; j+i <n ; j++) { 
			if (mang[i] == mang[i+j]) { 
				for (int k = 0; k < i; k++) { 
					if (mang[i] == mang[k]) { 
						kt++; 
					} 
				} 
				if (kt == 0) { 
					printf("%d ",mang[i]); 
				} 
				kt = 0; 
				break; 
			}
		} 
	} 
	return 0; 
}
