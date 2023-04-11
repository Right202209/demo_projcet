// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//         for (int j = 1; j <= m; i++)
//         {
//             if (i % 2 == 1)
//             {
//                 while (i--)
//                     cout << "#";
//                 cout << endl;
//             }
//             else
//             {

//                 if (j == m)
//             }
//         }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "#";
            }
        }
        else
        {
            if ((i - 1) % 4 == 2)
            {
                cout << "#";
            }
            for (int i = 0; i < m - 1; i++)
            {
                cout << ".";
            }
            if ((i - 1) % 4 == 0)
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
