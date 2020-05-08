#include <stdio.h>
int main()
{
    int weight;
    printf("enter the weight of watermelon:\n");
    scanf("%d", &weight);
    if (weight % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}