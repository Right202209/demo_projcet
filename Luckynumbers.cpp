// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int x,y;
//         cin>>x>>y;
//         for(int i=x;i<=y;i++)
//         {

//         }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         if (s == "big" || s == "clump" || s == "i" || s == "underpass" || s == "tranquilizing" || s == "andrej" || s == "dumpling" || s == "maisakurajima" || s == "bocchiryonijikakitasingingsongs" || s == "alperen" || s == "toxicpie" || s == "ari")
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     system("pause");
// }
#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[1000000];
int d[1000006][25];
int mn[1000006];
void rmq_init()
{
    for (int i = 1; i <= n; i++)
        d[i][0] = a[i];
    for (int j = 1; (1 << j) <= n; j++)
        for (int i = 1; i + (1 << j) - 1 <= n; i++)
            d[i][j] = min(d[i][j - 1], d[i + (1 << (j - 1))][j - 1]);
    for (int len = 1; len <= n; ++len)
    {
        int k = 0;
        while ((1 << (k + 1)) <= len)
            k++;
        mn[len] = k;
    }
}
int rmq(int L, int R)
{
    int k = mn[R - L + 1];
    return max(d[L][k], d[R - (1 << k) + 1][k]);
}
int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    rmq_init();
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        cout << rmq(x, y) << endl;
    }
    system("pause");
}