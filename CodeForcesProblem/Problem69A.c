#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    int x, y, z, sum_of_x=0, sum_of_y=0, sum_of_z=0;
    for (int i = 0; i < test_case; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum_of_x = sum_of_x + x;
        sum_of_y = sum_of_y + y;
        sum_of_z = sum_of_z + z;
    }
    if (sum_of_x == 0 && sum_of_y == 0 && sum_of_z == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }

    return 0;
}