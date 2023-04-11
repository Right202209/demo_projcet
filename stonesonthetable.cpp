#include <iostream>
using namespace std;
const int N = 60;
char s[N];
int main()
{
    int n,ans=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
