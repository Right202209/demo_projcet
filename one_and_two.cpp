#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll z = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 2)
                z++;
        }
        if (z == 0)
        {
            cout << "1" << endl;
            continue;
        }
        else if (z % 2 == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        ll x = z / 2;
        ll num = 0;
        i = 0;
        while (num < x)
        {
            if (v[i] == 2)
                num++;
            i++;
        }
        cout << i << endl;
    }
}
