#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    int a1[test_case], b1[test_case];
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d %d", &a1[i], &b1[i]);
    }
    for (int i = 0; i < test_case; i++)
    {
        printf("%d\n", a1[i] + b1[i]);
    }

    return 0;
}
