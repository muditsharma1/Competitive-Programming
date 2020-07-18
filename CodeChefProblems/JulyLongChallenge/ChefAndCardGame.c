#include <stdio.h>
int main()
{
    unsigned long long sum1 = 0, sum2 = 0;
    int t, Cscore = 0, Mscore = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        Cscore = 0, Mscore = 0;
        int n;
        scanf("%d", &n);
        unsigned long long a, b;
        for (int j = 0; j < n; j++)
        {
            sum1 = 0, sum2 = 0;
            scanf("%llu %llu", &a, &b);

            while (a != 0)
            {
                sum1 = sum1 + (a % 10);
                a = a / 10;
            }
            while (b != 0)
            {
                sum2 = sum2 + (b % 10);
                b = b / 10;
            }
            if (sum1 > sum2)
            {
                Cscore++;
            }
            else if (sum1 < sum2)
            {
                Mscore++;
            }
            else if (sum1 == sum2)
            {
                Cscore++;
                Mscore++;
            }
        }
        if (Cscore > Mscore)
        {
            int chef = 0;
            printf("%d %d\n", chef, Cscore);
        }
        else if (Mscore > Cscore)
        {
            int morty = 1;
            printf("%d %d\n", morty, Mscore);
        }
        else if (Mscore == Cscore)
        {
            int draw = 2;
            printf("%d %d\n", draw, Mscore);
        }
    }

    return 0;
}