#include <bits/stdc++.h>
#define LL long long
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    cout << (x - y << 1) << endl;
    for (int i = x; i >= y; i--)
        printf("%d ", i);
    for (int i = y + 1; i < x; i++)
        printf("%d ", i);
    printf("\n");
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}