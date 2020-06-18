#include <stdio.h>
int main()
{
    int test_case, count1 = 0, count2 = 0;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int len;
        scanf("%d", &len);
        count1 = 0, count2 = 0;
        int a[len];
        for (int j = 0; j < len; j++)
        {
            scanf("%d", &a[j]);
            if (a[j] % 2 != j % 2) // array is not good
            {
                if (a[j] % 2 == 0)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
        }
        if (count1 == count2)
        {
            printf("%d", count1);
        }
        else
        {
            int minus_one = -1;
            printf("%d", minus_one);
        }
        printf("\n");
    }

    return 0;
}