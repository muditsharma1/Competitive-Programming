#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            count1++;
        }
        else if (s[i] == 'D')
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << "Anton" << endl;
    }
    else if (count1 == count2)
    {
        cout << "Friendship" << endl;
    }
    else if (count1 < count2)
    {
        cout << "Danik" << endl;
    }
    return 0;
}