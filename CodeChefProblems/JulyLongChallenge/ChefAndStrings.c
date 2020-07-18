#include <stdio.h>
int main()
{
    int t;
    long temp, sum, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        scanf("%ld", &n);
        long a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%ld", &a[j]);
        }
        for (int k = 0; k < n - 1; k++)
        {
            temp = abs(a[k + 1] - a[k]) - 1;
            sum = sum + temp;
        }
        printf("%ld\n", sum);
    }

    return 0;
}