#include <stdio.h>
#include <string.h>
int main()
{
    int test_case, count = 0, len;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        char s[100];
        scanf("%s", &s);
        len = strlen(s);
        count = 0;
        for (int j = 0; j < len; j++)
        {
            if (s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U' || s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}