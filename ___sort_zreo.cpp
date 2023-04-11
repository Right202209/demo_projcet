//没做出来。。。。。。。。
#include <iostream>
using namespace std;
int a[100010];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s[100010]={};
        int n, ans = 0;
        cin >> n;
        if (n == 1)
        {
            int c;
            cin >> c;
            cout << 0 << "<-" << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cin >> a[i];
                s[a[i]]++;
            }
            for (int i = 1; i <= 100000; i++)
            {
                if (s[i] > 0)
                    ans++;
            }
            cout << ans  << "<-" << endl;
        }
    }
    system("pause");
    return 0;
}