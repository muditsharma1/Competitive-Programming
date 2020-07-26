#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n];
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        int b[m];
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &b[k]);
        }
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (a[j] == b[k])
                {
                    flag = 1;
                    printf("YES\n");
                    int z = 1;
                    printf("%d %d\n", z, a[j]);
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}