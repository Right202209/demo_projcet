// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         if (n % 2 == 0 && m % 2 == 0 || n % 2 == 1 && m % 2 == 1)
//             cout << "Tonya" << endl;
//         else
//             cout << "Burenka" << endl;
//     }
//     system("pause");
//     return 0;
// }
#include <iostream>
using namespace std;
int a[100],b[100];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>b[i];
        }
    }
    system("pause");
    return 0;
}