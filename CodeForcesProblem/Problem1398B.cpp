#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0, sum = 0;
        string s;
        int b[100] = {0}, j = 0;
        cin >> s;
        for (int m = 0; m < s.length(); m++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else if (s[i] == '0' && count != 0)
            {
                /* code */
                b[j++] = count;
                count = 0;
            }
        }
        sort(b, b + j);
        for (int k = j - 1; k >= 0; k = k - 2)
        {
            sum = sum + b[k];
        }
        cout << sum << endl;
    }

    return 0;
}