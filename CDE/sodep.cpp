#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int isPrime(int n){
	int uoc = 0;
	if(n < 2)
		return 0;
	for(int i = 2;i<=sqrt(n);i++)
		if(n%i==0)
			uoc++;
	if(uoc==0)
		return 1;
	else
		return 0;
}

int soLuongCS(int n){
	int dem = 1;
	while(n>=10){
		n/=10;
		dem++;
	}
	return dem;
}

int kiemTraSoDep(int n){
	int cs = soLuongCS(n);
	int arr[n], i = 1, sum = 0;
	while(n!=0){
		arr[i] = n%10;
		n/=10;
		i++;
	}
	for(int j = 0; j < i;j++){
		sum+=arr[j];
	}
	return sum%cs==0 ? 1 : 0;
}

int main(int argc, char *argv[]){
	int n,T;
	scanf("%d", &T);
	while (T--){
	scanf("%d", &n);
	if(kiemTraSoDep(n))
		printf("YES");
	else
		printf("NO");
	}
}
