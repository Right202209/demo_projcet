// #include <bits/stdc++.h>
// using namespace std;
// int v[55][55];
// int numU, numL, numD, numR;
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         int t, ans = 0;
//         string s;
//         cin >> t;
//         cin >> s;
//         for (int i = 0; i < t; i++)
//         {
//             if (s[i] == 'U')
//             {
//                 numU++;
//             }
//             if (s[i] == 'D')
//             {
//                 numD++;
//             }
//             if (s[i] == 'L')
//             {
//                 numL++;
//             }
//             if (s[i] == 'R')
//             {
//                 numR++;
//             }
//         }
//         if (numU >= 1  && numR >= 1|| numD >= 1 && numL >= 1)
//             ans = 1;
//         if (ans == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
bool solve(string s, long long n)
{
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            x++;
        else if (s[i] == 'L')
            x--;
        else if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;
        if (x == 1 && y == 1)
            return true;
    }
    return false;
}
int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        if (solve(s, n))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}