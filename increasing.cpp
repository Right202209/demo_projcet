// #include <iostream>
// #include <algorithm>
// #define ll unsigned long long
// using namespace std;
// ll a[1000];
// int main()
// {
//     int n, t;
//     cin >> n;
//     while (n--)
//     {
//         int ans = 1;
//         cin >> t;
//         for (int i = 1; i <= t; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a + 1, a + t + 1);
//         for (int i = 1; i < t; i++)
//         {
//             if (a[i] < a[i + 1])
//             {
//                 ans=1;
//                 break;
//             }
//             else
//             {
//                 ans=0;
//                 break;
//             }
//         }
//         if (ans == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <iostream>
using namespace std;
int a[1000];
int main()
{
    int N, n, flag = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        flag = 1;
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
            for (int k = 0; k < j; k++)
            {
                if (a[k] == a[j])
                {
                    flag = 0;
                }
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    system("pause");
    return 0;
}