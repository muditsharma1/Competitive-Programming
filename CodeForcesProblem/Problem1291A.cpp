#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] - '0') % 2 != 0)
            {
                ans += s[i];
            }
            if (ans.size() == 2)
            {
                break;
            }
        }
        if (ans.size() == 2)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}