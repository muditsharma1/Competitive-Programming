#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int i, p;
    char s[51], t[51];
    cin >> s >> t;
    p = 0;
    for (i = 0; i < strlen(t); i++)
    {
        if (s[p] == t[i])
            p++;
    }
    cout << p + 1;
    return 0;
}