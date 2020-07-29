#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long n, r;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> r;
        if (n <= r)
        {
            cout << ((n * (n - 1)) / 2) + 1 << endl;
        }
        else if (n > r)
        {
            cout << (r * (r + 1)) / 2 << endl;
        }
    }
    return 0;
}