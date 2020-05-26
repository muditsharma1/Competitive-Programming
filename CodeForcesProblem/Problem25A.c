#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
        if (a[i] % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (count1 > count2)
        {
            if (a[i] % 2 != 0)
            {
                printf("%d", i + 1);
            }
        }
        else if (count2 > count1)
        {
            if (a[i] % 2 == 0)
            {
                printf("%d", i + 1);
            }
        }
    }
    return 0;
}