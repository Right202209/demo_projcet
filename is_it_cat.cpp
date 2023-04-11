#include <bits/stdc++.h>
#define ll long long
#define siz(x) ((int)x.size())
using namespace std;
void solve()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    for (ll i = 0; i < sz(s); i++)
        s[i] = towlower(s[i]);
    string s1 = "";
    s1 += s[0];
    for (ll i = 1; i < n; i++)
        if (s[i] != s[i - 1])
            s1 += s[i];
    if (s1 == "meow")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
    system("pause");
    return 0;
}