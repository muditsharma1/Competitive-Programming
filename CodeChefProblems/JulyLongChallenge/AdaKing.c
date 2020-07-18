#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int k;
        scanf("%d", &k);
        for (int m = 0; m < 8; m++)
        {
            for (int n = 0; n < 8; n++)
            {
                if (m == 0 && n == 0)
                {
                    char c = '0';
                    printf("%c", c);
                    k--;
                    continue;
                }
                if (k > 0)
                {
                    char w = '.';
                    printf("%c", w);
                    k--;
                    continue;
                }

                if (k == 0)
                {
                    char q = 'X';
                    printf("%c", q);
                    continue;
                }
            }
            printf("\n");
        }
    }

    return 0;
}