#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[0]==1)
        {
            if (a[1]==2)
            {
                cout<<"NO";
                return 0;
            }
            else
            {
                continue;
            }
            
        }
        
    }
    
    return 0;
}