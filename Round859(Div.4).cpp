// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int N = 2e5 + 10;
// int a[N], b[N];
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             b[i] = a[i];
//         }
//         for (int i = 1; i <= q; i++)
//         {
//             for (int i = 1; i <= n; i++)
//                 b[i] = a[i];
//             int l, r, k, sum = 0;
//             cin >> l >> r >> k;
//             for (int i = l; i <= r; i++)
//             {
//                 b[i] = k;
//             }
//             for (int i = 1; i <= n; i++)
//             {
//                 sum += b[i];
//             }
//             // cout<<sum<<"/<-------"<<endl;
//             if (sum % 2 == 0)
//                 cout << "NO" << endl;
//             else
//                 cout << "YES" << endl;
//         }
//     }
//     system("pause");
//     return 0;
// }
// #include <bits/stdc++.h>
// #define int long long
// using namespace std;
// int a[200100], s[200100];
// signed main()
// {

//     ios::sync_with_stdio(0);
//     cin.tie(0), cout.tie(0);
//     int t, n, q, l, r;
//     int sum = 0, k;
//     cin >> t;
//     while (t--)
//     {
//         cin >> n >> q;
//         s[1] = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             s[i] = s[i - 1] + a[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             cin >> l >> r >> k;
//             sum = s[l - 1] + k * (r - l + 1) + s[n] - s[r];
//             cout << (sum % 2 != 0 ? "YES\n" : "NO\n");
//         }
//     }
//     system("pause");
//     return 0;
// }
// #include <bits/stdc++.h>
// typedef long long ll;
// typedef unsigned long long ull;
// using namespace std;
// int a[200100], s[200100];
// #define INF 1e18
// #define MOD (ll)1e9 + 7
// ll t, n, a[200200], l, r, mid, ans, sum;
// int main()
// {
//     cin >> t;
//     while (t--)
//     {
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         l = 1, r = n;
//         while (l < r)
//         {
//             sum = 0;
//             mid = (l + r) / 2;
//             cout << "? " << (mid - l + 1);
//             for (int j = l; j <= mid; j++)
//             {
//                 cout << " " << j;
//                 sum += a[j];
//             }
//             cout << endl;
//             cin >> ans;
//             if (ans != sum)
//             {
//                 r = mid;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }
//         cout << "! " << l << endl;
//     }
// }
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2500000;
int a[N];
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        if (a[1] != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        int ans = 1, sum = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] > sum)
            {
                cout << "NO" << endl;
                ans = 0;
                break;
            }
            sum += a[i];
        }
        if (ans)
            cout << "YES" << endl;
    }
    system("pause");
    return 0;
}
