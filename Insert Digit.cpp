#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, d;
    int sq;
    cin >> n >> d;
    string ls = "", ns = "";
    cin >> ls;
    for (int i = 0; i < n; i++)
    {
        if (d > (ls[i] - '0'))
        {
            ns += ls.substr(0, i);
            ns += (d + '0');
            ns += ls.substr(i);
            break;
        }
        else if (i == n - 1)
        {
            ns = ls;
            ns += (d + '0');
        }
    }
    cout << ns << '\n';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    system("pause");
    return 0;
}

2