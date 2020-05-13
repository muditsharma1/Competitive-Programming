#include <stdio.h>
int main()
{
    int n, p, v, t, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p);
        scanf("%d", &v);
        scanf("%d", &t);
        if (p + v + t >= 2)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}