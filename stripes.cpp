// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string a[100][100];
//     int t, ans = 0;
//     cin >> t;
//     while (t--)
//     {
//         for (int i = 1; i <= 8; i++)
//             for (int j = 1; j <= 8; j++)
//             {
//                 cin >> a[i][j];
//             }
//         for (int i = 1; i <= 8;)
//         {
//             for (int j = 1; j <= 8; j++)
//             {
//                 if (a[i][j] == "R")
//                 {
//                     ans = 1;
//                     break;
//                 }
//                 else if (a[i][j] == "B")
//                 {
//                     ans = 0;
//                     break;
//                 }
//             }
//             i++;
//         }
//         for (int j = 1; j <= 8;)
//         {
//             for (int i = 1; i <= 8; i++)
//             {
//                 if (a[i][j] == "R")
//                 {
//                     ans = 1;
//                     break;
//                 }
//                 else if (a[i][j] == "B")
//                 {
//                     ans = 0;
//                     break;
//                 }
//             }
//             j++;
//         }
//         if (ans == 1)
//             cout << "R" << endl;
//         else
//             cout << "B" << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
string s[8];
void solve()
{
    int f = 0;
    for (int i = 0; i < 8; i++)
    {
        cin >> s[i];
        if (s[i] == "RRRRRRRR")
            f = 1;
    }
    puts(f ? "R" : "B");
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