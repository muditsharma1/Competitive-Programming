#include <stdio.h>
#include <string.h>
int main()
{

    int len, lower = 0, upper = 0;
    char s[101];
    gets(s);
    len = strlen(s);
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                upper++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower++;
            }
        }
        if (lower > upper)
        {
            printf("%s\n", strlwr(s));
        }
        else if (lower < upper)
        {
            printf("%s\n", strupr(s));
        }
        else if (lower == upper)
        {
            printf("%s\n", strlwr(s));
        }
        lower = 0, upper = 0;
    }
    return 0;
}