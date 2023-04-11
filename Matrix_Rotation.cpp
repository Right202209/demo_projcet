#include <iostream>
#include <algorithm>
using namespace std;
int a[5][5];
int xz(int a[5][5])
{
    int tmp, temp;
    tmp = a[1][2];
    a[1][2] = a[1][1];
    a[1][1] = tmp;
    temp = a[2][2];
    a[2][2] = a[2][1];
    a[2][1] = temp;
}
int main()
{
    int t, k = 0, ans = 0;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 2; i++)
        {
            for (int j = 1; j <= 2; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[1][1] < a[1][2] && a[1][1] < a[2][1] && a[1][2] < a[2][2] && a[2][1] < a[2][2])
            cout << "YES" << endl;
        else
        {
            while (1)
            {
                int x, y, z, w;
                x = a[1][1];
                y = a[1][2];
                z = a[2][1];
                w = a[2][2];
                a[1][1] = z;
                a[1][2] = x;
                a[2][1] = w;
                a[2][2] = y;
                k++;
                if (k <= 3)
                {
                    if (a[1][1] < a[1][2] && a[1][1] < a[2][1] && a[1][2] < a[2][2] && a[2][1] < a[2][2])
                    {
                        ans = 1;
                        break;
                    }
                    else
                    {
                        ans = 0;
                        break;
                    }
                }
                else
                {
                    ans = 0;
                }
            }
            if (ans == 1)
            {
                cout << "YES" << endl;
            }
            else if (ans == 0)
            {
                cout << "NO" << endl;
            }
        }
    }
    system("pause");
    return 0;
}
