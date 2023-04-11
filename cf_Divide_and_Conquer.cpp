#include <iostream>
#include <algorithm>
//                          做错了//
using namespace std;
const int N = 1e8;
int a[N];
int main()
{
    int n, k, sum = 0, ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + k + 1);
        for (int i = 1; i <= k; i++)
        {
            sum += a[i];
            if (sum % 2 == 0)
            {
                cout << "0" << endl;
                break;
            }
            else
            {
                if (k % 2 == 0)
                {
                    if (a[i] % 2 == 0)
                    {
                        a[i] /= 2;
                        ans++;
                        sum += a[i];
                        if (sum % 2 == 0)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    if (a[i] % 2 != 0)
                    {
                        a[i] /= 2;
                        ans++;
                        sum += a[i];
                        if (sum % 2 == 0)
                        {
                            break;
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}
