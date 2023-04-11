#include <iostream>
using namespace std;
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> k >> n;
        int ans[k], hlp = 1;
        for (int i = 0; i < k; i++)
        {
            hlp += i;
            if (hlp <= n && (k - i - 1 + hlp) <= n)
            {
                ans[i] = hlp;
            }
            else
            {
                ans[i] = ans[i - 1] + 1;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}