#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <unordered_map>

using namespace std;

const int N = 310;
int a[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int o = 0, s = 0;
        for (int i = 1; i <= n; i++)
            if (a[i] & 1)
                o++;
            else
                s++;
        if (o >= 3)
        {
            cout << "YES" << endl;
            o = 3;
            for (int i = 1; i <= n; i++)
                if (o && a[i] & 1)
                {
                    cout << i << ' ';
                    o--;
                }
            cout << endl;
        }
        else if (o >= 1 && s >= 2)
        {
            o = 1, s = 2;
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
                if (o && a[i] & 1)
                {
                    cout << i << ' ';
                    o--;
                }
                else if (s && a[i] % 2 == 0)
                {
                    cout << i << ' ';
                    s--;
                }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}