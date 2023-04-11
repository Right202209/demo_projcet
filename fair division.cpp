// #include <bits/stdc++.h>
// using namespace std;
// int a[110];
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, sum = 0;
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//         }
//         if (n % 2 == 0 && sum % 2 == 0)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int a[101];

int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, c1 = 0, c2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                c2++;
            if (a[i] == 1)
                c1++;
            ans += a[i];
        }
        if (ans % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (c2 % 2 != 0)
        {
            if (c1 == 0)
            {
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << endl;
    }
    system("pause");
    return 0;
}
