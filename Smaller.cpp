#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int maxn = 1e3 + 10;
const int INF = 0x3fffffff;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(18);

    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        // 记录两个字符串的长度，以及是否包含了a以外的其他字母
        ll a = 1, b = 1;
        bool flagA = false, flagB = false;
        while (q--)
        {
            int d, k;
            string s;
            cin >> d >> k >> s;
            if (d == 1)
            {
                a += 1LL * k * (s.length());
                for (auto c : s)
                {
                    if (c != 'a')
                    {
                        flagA = true;
                        break;
                    }
                }
            }
            else
            {
                b += 1LL * k * (s.length());
                for (auto c : s)
                {
                    if (c != 'a')
                    {
                        flagB = true;
                        break;
                    }
                }
            }
            if (flagB)
                cout << "YES\n";
            else if (!flagA)
                cout << (a < b ? "YES" : "NO") << endl;
            else
                cout << "NO\n";
        }
    }
    system("pause");
    return 0;
}