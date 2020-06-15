#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, count1 = 0, count2 = 0, count3 = 0;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) < abs(b - i))
        {
            count1++;
        }
        else if (abs(a - i) == abs(b - i))
        {
            count2++;
        }
        else if (abs(a - i) > abs(b - i))
        {
            count3++;
        }
    }
    printf("%d %d %d", count1, count2, count3);
    return 0;
}