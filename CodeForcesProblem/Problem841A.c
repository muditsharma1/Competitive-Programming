#include <stdio.h>
#include <string.h>
int main()
{
    int n, k, hashmap[26] = {0};
    scanf("%d %d\n", &n, &k);
    char s[n + 1];
    gets(s);
    for (int i = 0; i < n; i++)
    {
        hashmap[s[i] - 97]++;
    }
    for (int j = 0; j < 26; j++)
    {
        if (hashmap[j] > k)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}