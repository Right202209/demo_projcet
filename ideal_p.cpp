// #include <bits/stdc++.h>
// using namespace std;
// int a[50], b[50];
// int n, k;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         for (int i = 1; i <= 50; i++)
//         {
//             a[i] = 0, b[i] = 0;
//         }
//         cin >> n >> k;
//         int ans = 0;
//         while (n--)
//         {
//             int x, y;
//             cin >> x >> y;
//             a[x]++, b[y]++;
//             if (a[k] && b[k])
//                 return ans = 1;
//             else
//                 return ans = 0;
//         }
//         if (ans)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     system("pause");
//     return 0;
// }

// #include<__msvc_all_public_headers.hpp>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N];
int b[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 50; i++)
            a[i] = 0, b[i] = 0;
        int n, k;
        cin >> n >> k;
        int t = 0;
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            cin >> l >> r;
            a[l]++;
            b[r]++;
        }
        if (a[k] && b[k])
            t = 1;
        if (t)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    system("pause");
    return 0;
}