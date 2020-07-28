#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    long long int k, var;
    cin >> t;

    for (int j = 0; j < t; j++)
    {

        cin >> n >> k;
        char str[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> var;
            if (var % k == 0)
            {
                str[i] = '1';
            }
            else
            {
                str[i] = '0';
            }
        }
        str[n] = '\0';
        cout << str << "\n";
    }
    return 0;
}