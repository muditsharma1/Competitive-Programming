#include <stdio.h>

int main()
{
    char s[100];
    char c;

    scanf("%[^\n]", &s);
    c = getchar();

    printf("Hello, World.\n%s", s);

    return 0;
}
