#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag;
        cin >> n;
        int p[n];
        flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (p[i] > p[i - 1] && p[i] > p[i + 1])
            {
                cout << "YES" << endl;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}