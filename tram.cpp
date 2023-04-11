#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (ans < sum)
        {
            ans = sum;
        }
    }
    cout << ans << endl;
    system("pause");
    return 0;
}