// #include <bits/stdc++.h>
// using namespace std;
// int a[1000000];
// void solve()
// {
//     int n, w, ans = 0;
//     cin >> n >> w;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     sort(a + 1, a + n + 1);
//     for (int i = n; i >= 1; i--)
//     {
//         w -= a[i];
//         if (w <= 0)
//         {
//             cout << ans + 1 << endl;
//             break;
//         }
//         else
//             ans++;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     system("pause");
//     return 0;
// }
#include <bits/stdc++.h>
#define ll unsigned long long
#define int ll
using namespace std;
ll n;
ll fpow(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = res * a % n;
        }
        a = a * a % n;
        b >>= 1;
    }
    return res;
}
void solve()
{
    ll ans = 0;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        ans += fpow(i, n) % n;
    }
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    system("pause");
    return 0;
}