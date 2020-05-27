#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int count = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}