#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int a, b, c, x, y, z;
int main()
{
    int t, sum = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y >> z;
        a = a + x;
        b = b + y;
        c = c + z;
    }
    if (a == 0 && b == 0 && c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    system("pause");
    return 0;
}