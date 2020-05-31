#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    gets(s);
    if ((s[0] >= 'a') && (s[0] <= 'z'))
    {
        s[0] = s[0] - 'a' + 'A';
    }
    puts(s);
    return 0;
}