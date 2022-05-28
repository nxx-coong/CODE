#include <stdio.h>
 
int main () {
    int t;
    scanf ("%d", &t);
    for (int i=1; i<=t; i++) {
        long long n;
        scanf ("%lld", &n);
        if (n%100==86) printf ("1\n");
        else printf ("0\n");
    }
    return 0;
}
