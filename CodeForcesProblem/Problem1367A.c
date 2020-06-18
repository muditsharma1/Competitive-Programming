#include <stdio.h>
#include <string.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        char s[101];
        scanf("%s", s);
        for (int j = 0; j < strlen(s); j = j + 2)
        {
            printf("%c", s[j]);
        }
        printf("%c", s[strlen(s) - 1]);
        printf("\n");
    }

    return 0;
}