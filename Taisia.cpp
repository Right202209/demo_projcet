// #include<bits/stdc++.h>
// using namespace std;
// int a[50];
// int main()
// {
//     int t,n,s,r;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>s>>r;
//         int t=r,m=n;
//         for(int i=1;i<=n;i++)
//         {
//             a[i]=t/(n-1);
//             m--;
//             t=t-a[i];
//         }
//         for(int i=1;i<n;i++)
//             if(a[i]==0)
//             a[i]=1;
//         cout<<s-r;
//         for(int i=1;i<n;i++)
//             cout<<" "<<a[i];
//         cout<<endl;
//     }
//     system("pause");
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r, ans;
        cin >> n >> s >> r;
        n = n - 1;
        cout << s - r << " ";
        while (n != 0)
        {
            ans = r / n;
            cout << ans << " ";
            r = r - ans;
            n--;
        }
        cout << "\n";
    }
    return 0;
}