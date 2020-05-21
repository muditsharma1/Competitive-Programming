#include <stdio.h>
int main()
{
    int k, initial_n, w, sum = 0;
    scanf("%d %d %d", &k, &initial_n, &w);
    int a[w];
    for (int i = 1; i <= w; i++)
    {
        a[i] = k * i;
        sum = sum + a[i];
    }
    if (initial_n >= sum)
    {
        int zero = 0;
        printf("%d", zero);
    }
    else
    {
        int z;
        z = sum - initial_n;
        printf("%d", z);
    }
    return 0;
}