#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n, h;
    cin >> n >> h;
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
            a[i] = 2;
        else
            a[i] = 1;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    system("pause");
    return 0;
}