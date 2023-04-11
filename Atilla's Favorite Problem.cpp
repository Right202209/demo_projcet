#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int max1 = s[n - 1] - 'a';
        cout << max1 + 1 << endl;
    }
    //system("pause");
    return 0;
}