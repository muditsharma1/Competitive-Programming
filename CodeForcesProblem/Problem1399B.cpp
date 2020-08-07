#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, mc, om, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int ac[n];
        long long int ao[n];
        cin >> mc;
        ac[0] = mc;
        for (long long int i = 1; i < n; i++)
        {
            cin >> ac[i];
            if (ac[i] < mc)
            {
                mc = ac[i];
            }
        }
        cin >> om;
        ao[0] = om;

        for (long long int i = 1; i < n; i++)
        {
            cin >> ao[i];
            if (ao[i] < om)
            {
                om = ao[i];
            }
        }

        long long int answermoves = 0, movings, keep1, keep2;
        for (long long int i = 0; i < n; i++)
        {
            keep1 = ac[i] - mc;
            keep2 = ao[i] - om;
            answermoves = answermoves + min(keep1, keep2) + abs(keep1 - keep2);
        }

        cout << answermoves << "\n";
    }

    return 0;
}