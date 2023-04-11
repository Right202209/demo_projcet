#include <iostream>
using namespace std;
int a[10][10];
int main()
{
    int ans = 0;
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            if (a[i][j] == 1)
            {
                ans = abs(i - 3) + abs(j - 3);
            }
        }
    cout << ans << endl;
    system("pause");
    return 0;
}