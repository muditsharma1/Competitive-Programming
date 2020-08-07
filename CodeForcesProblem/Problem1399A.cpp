#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int flag = 0;
        for (int j = 1; j < n; j++)
        {
            if (a[j] - a[j - 1] > 1)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}