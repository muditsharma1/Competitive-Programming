#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, max, min, count1 = 0, count2 = 0;
    cin >> n;
    long long int a[n];
    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }
    if (max == min)
    {
        cout << max - min << " " << ((n - 1) * n) / 2 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            count1++;
        }
        else if (a[i] == max)
        {
            count2++;
        }
    }
    cout << max - min << " " << count1 * count2;
    return 0;
}