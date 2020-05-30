#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], max, min, count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d ", &a[i]);
    }
    scanf("%d", &a[n - 1]);
    max = a[0];
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            count++;
        }
        if (a[i] < min)
        {
            min = a[i];
            count++;
        }
    }
    printf("%d", count);

    return 0;
}