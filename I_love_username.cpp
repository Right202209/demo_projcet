#include <bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    int n, cnt = 0;
    cin >> n;
    int mina, maxa;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxa = mina = a[1];
    }
    // sort(a + 2, a + n + 1);
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < mina)
        {
            mina = a[i];
            cnt++;
        }
        else if (a[i] > maxa)
        {
            maxa = a[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    system("pause");
    return 0;
}