#include <stdio.h>
#define ll long long
void PTNN()
{
    ll n;
    scanf("%lld", &n);
    ll k;
    scanf("%lld", &k);
	ll a[n];
	for(ll j=0; j<n; j++){
		scanf("%lld",&a[j]);
	}	
	ll tg;
    for(ll j = 0; j < n - 1; j++){
        for(ll p = j + 1; p < n; p++){
            if(a[j] > a[p]){
                tg = a[j];
                a[j] = a[p];
                a[p] = tg;        
            }
        }
    }
	printf("%lld", a[k-1]);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        PTNN();
        printf("\n");
    }
}
