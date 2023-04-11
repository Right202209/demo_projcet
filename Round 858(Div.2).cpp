#include <bits/stdc++.h>
#define int long long
using namespace std;
int dx[] = {-1, 1};
int dy[] = {0, 1};
int v[1000][1000];
int ans = 0;
int dfs(int x, int y)
{
    if (v[x][y])
        return 0;
    v[x][y] = 1;
    for (int i = 0; i <= 2; i++)
    {
        dfs(x + dx[i], y + dy[i]);
        ans++;
    }
    return ans;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        dfs(a, b);
        if (!v[c][d])
            cout << -1 << endl;
        else
            cout << ans;
    }
    system("pause");
    return 0;
}
