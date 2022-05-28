#include<stdio.h>
#include<math.h>

void nhap(int a[],int b,int i){
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
}
int main(){
    int i,j,T,a[100],m,n,c;
    scanf("%d",&T);
    while(T--){
        c=0;
        scanf("%d",&m);
        scanf("%d",&n);
        nhap(a,m,i);
        for(i=0;i<m-1;i++){
            for(j=i+1;j<m;j++){
                if(a[i]+a[j]==n){
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }

}
