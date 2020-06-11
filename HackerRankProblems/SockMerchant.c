#include <stdio.h>
int main()
{
    int n, f = 0, maxf = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        f = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] == a[i])
            {
                f++;
            }
        }
        if (f > maxf)
        {
            maxf = f;
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        f = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] == a[i])
            {
                f++;
            }
        }
        if (f == maxf)
        {
            c++;
        }
    }
    printf("%d", maxf * c);
    return 0;
}