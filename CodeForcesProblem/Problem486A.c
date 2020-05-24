#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    if (n % 2 == 0)
    {
        long long k = n / 2;
        printf("%lld\n", k);
    }
    else
    {
        long long m = -(n + 1) / 2;
        printf("%lld", m);
    }
    return 0;
}