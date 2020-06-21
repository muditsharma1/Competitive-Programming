#include <stdio.h>
int main()
{
    int i,d,s;
    int i2;
    double d2;
    char s2[100];
    scanf("%d", &i2);
    scanf("%lf", &d2);
    scanf("%*[\n] %[^\n]", s2);
    printf("%d\n", i + i2);
    printf("%.01lf\n", d + d2);
    printf("%s%s", s, s2);

    return 0;
}