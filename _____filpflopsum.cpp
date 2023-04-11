// #include <bits/stdc++.h>
// using namespace std;
// int a[100010];
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//         int ans1 = 0, ans_1 = 0, ans = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (a[i] < 0)
//             {
//                 ans1++;
//             }
//             else
//             {
//                 ans_1++;
//             }
//             ans += a[i];
//         }
//         if (ans1 > ans_1 && n % 2 != 0)
//             cout << ans1 << endl;
//         else if (ans1 < ans_1 && n % 2 != 0)
//             cout << ans_1 << endl;
//         else if (n % 2 == 0 && ans1 == ans_1)
//             cout << n << endl;
//         else
//             cout << -ans << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int min = 2, sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
            if (i > 0)
            {
                min = std::min(min, a[i] + a[i - 1]);
            }
        }
        cout << sum - 2 * min << endl;
    }
    return 0;
}