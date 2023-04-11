// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     cout<<n-1<<endl;
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
using namespace std;
int a[110], b[110];
int numa1, numb1;
int solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == b[i])
        {
            cout << "0" << endl;
            break;
        }
        if (a[i] == 1)
            numa1++;
        else if (b[i] == 1)
            numb1++;
    }
    if (numa1 == numb1)
    {
        return 1;
    }
    else
    {
        int t = a - b;
        return abs(t);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    system("pause");
    return 0;
}