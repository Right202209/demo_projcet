// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n , ans;
//         string s;
//         cin >> n;
//         cin >> s;
//         ans=n;
//         for(int i=0;i<=n/2;i++)
//         {
//             if(s[i]=='1')
//             {
//                 if(s[n-i]=='0')
//                 {
//                     ans-=2;
//                 }
//             }
//             else if(s[i]=='0')
//             {
//                 if(s[n-i]=='1')
//                 {
//                     ans-=2;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll i = 0, j = n - 1, ans = n;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                ans -= 2;
                i++;
                j--;
            }
            else
                break;
        }
        cout << ans << endl;
    }
}