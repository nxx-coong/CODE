#include <stdio.h>
#include <math.h>

int prime[1000001];

void DSNT()
{
    for (int i = 0; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;

    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int main()
{
    DSNT();
    int T,a,b;
    scanf("%d",&T);
    while (T--)
    {
        int c = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        for (int i = a; i <= b; i++)
        {
            if (prime[i])
            {
                c++;
            }
        }
        printf("%d\n", c);
    }
}
