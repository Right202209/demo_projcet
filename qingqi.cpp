#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int fa[N];
int find(int x)
{
    if (fa[x] == x)
        return x;
    return fa[x] = find(fa[x]);
}
void merge(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x != y)
    {
        fa[x] = y;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int m, n, q;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        merge(x, y);
    }
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int c, d;
        scanf("%d %d", &c, &d);
        if (find(c) == find(d))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    system("pause");
    return 0;
}