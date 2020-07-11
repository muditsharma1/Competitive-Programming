#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long x, y, a, b;
    for (int i = 0; i < t; i++)
    {
        scanf("%llu %llu", &x, &y);
        scanf("%llu %llu", &a, &b);
        if (b >= 2 * a)
        {
            printf("%llu\n", a * (x + y));
        }
        else
        {
            if (x > y)
            {
                printf("%llu\n", (y * b) + (a * (x - y)));
            }
            else
            {
                printf("%llu\n", (x * b) + (a * (y - x)));
            }
        }
    }
    return 0;
}