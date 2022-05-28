#include<stdio.h>
#include<math.h>
#define MAX 100000
int main(){
    int T,a,i,j;
    long long arr[MAX],m,n;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&a);
        for(i=0;i<a;i++){
            scanf("%lld",&arr[i]);
        }
        m=abs(arr[0]-arr[1]);
        for(i=0;i<a;i++){
            for(j=i+1;j<a;j++){
                n=abs(arr[j]-arr[i]);
                if(m>n){
                    m=n;
                }
            }
        }
        printf("%lld\n",m);
    }
}
