#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    int n[test_case], m[test_case];
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d %d", &n[i], &m[i]);
    }
    for (int j = 0; j < test_case; j++)
    {
        if (n[j] == 1 || m[j] == 1 || (n[j] == 2 && m[j] == 2))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}